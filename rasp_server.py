import can
import time
import isotp
from flask import Flask, request
from flask_cors import CORS
from flask import render_template_string
from flask import jsonify
import requests

app = Flask(__name__)
CORS(app)

# --- CAN 초기화 ---
bus = can.interface.Bus(
    bustype='socketcan',
    channel='can0',
    bitrate=500000,
)

# --- ISO-TP 주소 및 스택 설정 ---
address = isotp.Address(
    isotp.AddressingMode.Normal_11bits,
    txid=0x764,
    rxid=0x763
)

stack = isotp.CanStack(bus=bus, address=address, params={
    'blocksize': 8,
    'stmin': 0,
    'rx_consecutive_frame_timeout': 1000,
    'rx_flowcontrol_timeout': 1000
})

# --- 명령 메시지 정의 ---
update_msg = can.Message(
    arbitration_id=0x511,
    data=[0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00],
    is_extended_id=False
)

logs_msg = can.Message(
    arbitration_id=0x514,
    data=[0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00],
    is_extended_id=False
)

version_msg = can.Message(
    arbitration_id=0x514,
    data=[0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00],
    is_extended_id=False
)

prove_msg = can.Message(
    arbitration_id=0x516,
    data=[0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00],
    is_extended_id=False
)

def parse_log_sections(raw_log: str):
    sections = raw_log.split("=====================================")
    parsed = [section.strip() for section in sections if section.strip()]
    return parsed

def receive_isotp_data(timeout_sec=5, filepath="output.txt"):
    start_time = time.time()
    all_payload = b""  # 전체 데이터 누적

    with open(filepath, "wb") as f:
        while True:
            stack.process()
            time.sleep(0.01)

            if stack.available():
                chunk = stack.recv()
                all_payload += chunk
                f.write(chunk)
                print(f"📥 수신: {len(chunk)} bytes 누적 → 총 {len(all_payload)} bytes")

            if time.time() - start_time > timeout_sec:
                print("⏰ 수신 종료 - 타임아웃")
                break

    if all_payload:
        print(f"✅ 전체 수신 완료: {len(all_payload)} bytes")
    else:
        print("⚠️ 수신된 데이터 없음")

    return all_payload
    
@app.route('/update')
def update():
    print("update 요청")
    try:
        bus.send(update_msg)
        print("update 송신 완료")
    except can.CanError as e:
        print("송신 실패:", e)
        return "송신 실패"

    return "업데이트 명령"

@app.route('/logs')
def diagnosis():
    try:
        bus.send(logs_msg)
        print("logs_msg 송신 완료")
    except can.CanError as e:
        return "로그 요청 송신 실패", 500

    received_bytes = receive_isotp_data()
    if not received_bytes:
        return "수신 실패 또는 타임아웃", 504

    try:
        with open("output.txt", "rb") as f:
            res = requests.post(
                "http://0.0.0.0:5000/file",
                files={"file": f}  # multipart/form-data로 전송됨
            )
        print("📤 파일 전송 완료, 상태코드:", res.status_code)
    except Exception as e:
        print("❌ 파일 전송 실패:", e)
        return "파일 전송 실패", 500

    return "파일 전송 및 진단 완료", 200

@app.route('/force')
def force():
    ecuid_str = request.args.get('ecuid')  
    cmd_str = request.args.get('cmd')

    try:
        can_id = int(ecuid_str, 0)  # 예: "0x740"
        can_cmd = int(cmd_str, 0)
    except (ValueError, TypeError):
        return "잘못된 ecuid 값", 400

    # 송신할 전체 payload 데이터
    if can_id == 0x755:
        payload = bytes([
            0x2F, 0xFC, 0x00, 0x03, can_cmd, 0x00, 0x00,
        ])
    elif can_id == 0x753:
        payload = bytes([
            0x2F, 0xFD, 0x00, 0x03, can_cmd, 0x00, 0x00,
        ])

    total_len = len(payload)
    index = 0
    seq_num = 1  # CF sequence number: 1 ~ F

    try:
        if total_len <= 7:
            # Single Frame
            data = [0x00 | total_len] + list(payload) + [0x00] * (8 - (1 + total_len))
            msg = can.Message(arbitration_id=can_id, data=data, is_extended_id=False)
            bus.send(msg)
        else:
            # First Frame
            ff_data = [0x10 | ((total_len >> 8) & 0x0F), total_len & 0xFF]
            ff_data += list(payload[index:index+6])
            index += 6
            ff_data += [0x00] * (8 - len(ff_data))
            msg = can.Message(arbitration_id=can_id, data=ff_data, is_extended_id=False)
            bus.send(msg)

            # Consecutive Frames
            while index < total_len:
                cf_data = [0x20 | (seq_num & 0x0F)]
                chunk = payload[index:index+7]
                cf_data += list(chunk)
                cf_data += [0x00] * (8 - len(cf_data))
                msg = can.Message(arbitration_id=can_id, data=cf_data, is_extended_id=False)
                bus.send(msg)
                print(f"➕ CF{seq_num} 전송: {cf_data}")
                index += 7
                seq_num = (seq_num + 1) % 0x10  # 0x1~0xF 순환
                time.sleep(0.01)  # 너무 빠르면 수신 측에서 놓칠 수 있음

    except can.CanError as e:
        print("송신 실패:", e)
        return "송신 실패", 500

    return f"ISO-TP 강제구동 실행 완료 (ecuid: {hex(can_id)}, cmd: {hex(can_cmd)})"

if __name__ == '__main__':
    # threading.Thread(target=monitor_can_messages, daemon=True).start()
    app.run(host='0.0.0.0', port=50000)

