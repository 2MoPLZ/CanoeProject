import os
import time
import binascii
import threading

from cryptography.hazmat.primitives import serialization, hashes, padding as sympadding
from cryptography.hazmat.primitives.asymmetric import padding as asympadding, utils
from cryptography.hazmat.primitives.ciphers import Cipher, algorithms, modes
from cryptography.exceptions import InvalidSignature
from cryptography.hazmat.backends import default_backend
from http.server import BaseHTTPRequestHandler, HTTPServer

class FileReceiverHandler(BaseHTTPRequestHandler):
    def do_POST(self):
        content_length = int(self.headers['Content-Length'])
        file_data = self.rfile.read(content_length)

        with open("SW_Package.bin", "wb") as f:
            f.write(file_data)

        self.send_response(200)
        self.end_headers()
        self.wfile.write(b"File received successfully.")


# === 설정 ===
PACKAGE_FILE       = "SW_Package.bin"          # 감시할 패키지 파일 이름
VEHICLE_PRIV_KEY   = "./keys/Vehicle_Private.pem"     # 차량 쪽 RSA 개인키
SERVER_PUB_KEY     = "./keys/Server_Public.pem"       # 서버 쪽 RSA 공개키 (서명 검증용)
OUTPUT_DIR         = "firmware"         # 분리된 펌웨어 저장 폴더
POLL_INTERVAL_SEC  = 1.0                       # 파일 변경 폴링 주기 (초)

# RSA 1024bit → 128바이트
SIGNATURE_LEN = 128
RSA_KEY_LEN   = 128

def debug_print(msg, *args, hexd=None):
    """
    포맷된 메시지를 [DEBUG]로 출력.
    hexd(bytes)가 주어지면 hex 덤프도 함께 출력.
    """
    print("[DEBUG] " + msg.format(*args))
    if hexd is not None:
        print("        hex:", binascii.hexlify(hexd).decode())

def decrypt_file_rsa(encrypted_data, private_key_path):
    with open(private_key_path, 'rb') as key_file:
        private_key = serialization.load_pem_private_key(
            key_file.read(),
            password=b'private',
            backend=default_backend()
        )
    decrypted_file = private_key.decrypt(
        encrypted_data,
        asympadding.PKCS1v15()  # ✅ 암호화와 일치시킴
    )
    return decrypted_file

def parse_package():
    # 1) 전체 바이너리 읽기
    with open(PACKAGE_FILE, "rb") as f:
        blob = f.read()
    debug_print("전체 blob 크기: {} bytes", len(blob), hexd=blob[:32])

    # 2) 레이아웃 분해
    signature        = blob[0:SIGNATURE_LEN]                                      # 0..127
    enc_aes_key_blob = blob[SIGNATURE_LEN:SIGNATURE_LEN+RSA_KEY_LEN]              # 128..255
    signed_container = blob[SIGNATURE_LEN+RSA_KEY_LEN:]                           # 256~

    debug_print("signature[0:16]", hexd=signature[0:16])
    debug_print("enc_aes_key_blob[0:16]", hexd=enc_aes_key_blob[0:16])
    debug_print("signed_container[0:16]", hexd=signed_container[0:16])

    # 3) 서명 검증 (서버 공개키로)
    #    SHA256 해시 후 Prehashed PKCS1v15 검증
    digest = hashes.Hash(hashes.SHA256())
    digest.update(signed_container)
    container_hash = digest.finalize()
    debug_print("컨테이너 해시 (SHA256):", hexd=container_hash)

    with open(SERVER_PUB_KEY, "rb") as key_file:
        pubkey = serialization.load_pem_public_key(key_file.read())

    try:
        pubkey.verify(
            signature,
            container_hash,
            asympadding.PKCS1v15(),
            utils.Prehashed(hashes.SHA256())
        )
        debug_print("서명 검증 성공")
    except InvalidSignature:
        print("[ERROR] 서명 검증 실패! 패키지를 신뢰할 수 없습니다.")
        return

    # 4) RSA 개인키로 AES 키+IV 복호화
    """with open(VEHICLE_PRIV_KEY, "rb") as key_file:
        privkey = serialization.load_pem_private_key(key_file.read(), password=b'private')
    aes_key_iv = privkey.decrypt(
        enc_aes_key_blob,
        asympadding.PKCS1v15()
    )"""
    aes_key_iv = decrypt_file_rsa(enc_aes_key_blob, "./keys/Vehicle_Private.pem")
    aes_key = aes_key_iv[:16]
    aes_iv  = aes_key_iv[16:32]
    debug_print("AES 키·IV (16+16 bytes):", hexd=aes_key_iv)

    # 5) AES-CBC 로 SignedContainer 복호화 & PKCS7 언패딩
    cipher    = Cipher(algorithms.AES(aes_key), modes.CBC(aes_iv))
    decryptor = cipher.decryptor()
    padded_plain = decryptor.update(signed_container) + decryptor.finalize()
    unpadder = sympadding.PKCS7(128).unpadder()
    plain = unpadder.update(padded_plain) + unpadder.finalize()
    debug_print("복호화된 컨테이너[0:32]", hexd=plain[:32])

    # 6) 평문 파싱하여 각 클러스터 펌웨어 분리
    os.makedirs(OUTPUT_DIR, exist_ok=True)
    offset = 0
    cluster_count = plain[offset]
    offset += 1
    print(f"[파싱 시작] 클러스터 개수: {cluster_count}")

    for idx in range(cluster_count):
        target   = plain[offset:offset+16].rstrip(b'\x00').decode("utf-8"); offset += 16
        rxswin    = plain[offset:offset+16].rstrip(b'\x00').decode("utf-8"); offset += 16
        fw_size  = int.from_bytes(plain[offset:offset+2], "big"); offset += 2
        fw_data  = plain[offset:offset+fw_size]; offset += fw_size

        out_path = os.path.join(OUTPUT_DIR, f"{target}.txt")
        with open(out_path, "wb") as fwf:
            fwf.write(fw_data)
        print(f"  [{idx+1}/{cluster_count}] 저장: {out_path} ({fw_size} bytes)")

    print("[파싱 완료]\n")

def watch_loop():
    last_mtime = None
    print(f"'{PACKAGE_FILE}' 파일 변경을 감시합니다… (주기: {POLL_INTERVAL_SEC}s)")
    while True:
        try:
            mtime = os.path.getmtime(PACKAGE_FILE)
        except FileNotFoundError:
            time.sleep(POLL_INTERVAL_SEC)
            continue

        if last_mtime is None or mtime != last_mtime:
            print(f"\n[감지] 패키지 변경 시각: {time.ctime(mtime)}")
            parse_package()
            last_mtime = mtime

        time.sleep(POLL_INTERVAL_SEC)

if __name__ == "__main__":
    server = HTTPServer(("", 8000), FileReceiverHandler)
    server_thread = threading.Thread(target=server.serve_forever, daemon=True)
    server_thread.start()

    watch_loop()

# netsh advfirewall firewall add rule name="Open Port 8000" dir=in action=allow protocol=TCP localport=8000
