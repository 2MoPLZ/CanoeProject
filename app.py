from flask import Flask, render_template, request, redirect, url_for, flash
import boto3, os, subprocess
from datetime import datetime
import package_generator
import requests

app = Flask(__name__)
app.secret_key = 'your-very-secret-key'  # 아무 문자열이나 OK, 충분히 랜덤한 문자열이면 더 좋음

# S3 설정
s3 = boto3.client(
    's3',
    aws_access_key_id='key',
    aws_secret_access_key='key',
    region_name='ap-northeast-2'  # 실제 버킷 리전에 맞게
)
BUCKET_NAME = 'bucket'

# 기능별 디렉토리 매핑
FEATURE_DIRS = {
    "ambient": "MOOD/",
    "aeb": "ADAS/",
    "cluster": "CLUSTER/",
    "ems": "EMS/",
    "scu": "SCU/",
}

@app.route('/')
def index():
    return render_template('index.html')

@app.route('/store')
def store():
    return render_template('store.html')

@app.route('/diagnosis')
def diagnosis():
    return render_template('diagnosis.html')

@app.route('/update', methods=['POST'])
def update():
    selected_features = request.form.getlist('features')  # ['ambient', 'aeb'] 형태

    downloaded_files = []

    os.makedirs("downloads", exist_ok=True)

    for feature in selected_features:
        if feature in FEATURE_DIRS:
            prefix = FEATURE_DIRS[feature]
            
            # S3 객체 리스트 가져오기
            response = s3.list_objects_v2(Bucket=BUCKET_NAME, Prefix=prefix)
            objects = response.get("Contents", [])
            
            if not objects:
                flash(f"{feature}에 대한 파일이 없습니다.")
                continue

            # 가장 최근 파일 찾기
            latest_file = max(objects, key=lambda x: x['LastModified'])
            key = latest_file['Key']
            filename = key.split("/")[-1]  # 파일 이름 추출

            # 다운로드
            local_path = f"./downloads/{filename}"  # 다운로드할 위치
            s3.download_file(BUCKET_NAME, key, local_path)

            downloaded_files.append(filename)
            print(f"✅ {feature} → {filename} 다운로드 완료")

    package_generator.make_sw_package()
    with open("SW_Package.bin", "rb") as f:
        package_data = f.read()
    
    # 패키지 보내는 부분
    rasp_cmd_res = requests.get("http://0.0.0.0:50000/update")
    file_res = requests.post("http://0.0.0.0:8000", data=package_data)
    print(rasp_cmd_res.text)
    print(file_res.text)

    flash(f"다운로드 완료: {', '.join(downloaded_files)}")
    return redirect(url_for('store'))

@app.route('/file', methods=['POST'])
def receive_diagnostic_log():
    uploaded_file = request.files.get("file")
    if uploaded_file:
        uploaded_file.save("logs_output.txt")
        print("✅ 진단 로그 수신 완료")
        return "파일 저장 완료", 200
    else:
        return "파일이 없습니다", 400

# @app.route('/file', methods=['POST'])
# def receive_diagnostic_log():
#     uploaded_file = request.files.get("file")
#     if not uploaded_file:
#         return jsonify({"status": "fail", "message": "파일이 없습니다"}), 400

#     try:
#         # 파일 저장
#         uploaded_file.save("logs_output.txt")
#         print("✅ 진단 로그 수신 완료")

#         # 파일 내용 읽어서 구분자 기준 나누기
#         content = uploaded_file.read().decode("utf-8")  # read는 Binary
#         sections = [s.strip() for s in content.split("=====") if s.strip()]

#         return jsonify({
#             "status": "success",
#             "sections": sections
#         }), 200
#     except Exception as e:
#         return jsonify({
#             "status": "error",
#             "message": str(e)
#         }), 500


if __name__ == '__main__':
    app.run(host='0.0.0.0', port=5000, debug=True)

