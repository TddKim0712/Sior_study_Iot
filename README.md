# Sior_study_Iot
2025 사이어 스터디 깃허브 레포

## 사이어 스터디를 위한 도커 배포
### 도커 설치
사이트 주소:  https://docs.docker.com/desktop/setup/install/windows-install/
![image](https://github.com/user-attachments/assets/577c28a6-0357-4634-9831-425e9fe0dba9)

Docker desktop installer.exe 를 설치한 후 실행한다. (시간 소요)

!! _설치 후 재부팅 필수_ !!

---------------------------------

### Git 설치
윈도우 검색에 git bash가 존재하거나, cmd (powershell)에 git 이라 쳤을때 
모르는 커맨드라는 말이 아니면 git이 이미 있는 것이다.

https://git-scm.com/downloads

이미 있으면 패스
-------------------------------
### VS code Extension 설정

C/C++ (Microsoft 제공)

CMake Tools (Microsoft 제공)

PlatformIO IDE (PlatformIO 제공)

DevContainers (Microsoft 제공)

ESP-IDF (espressif Systems 제공)

----------------------------
### git bash -> 폴더 받기

1. 윈도우에서 git bash 찾아서 실행
2. 원하는 디렉터리를 찾아서 이동
3. git clone https://github.com/TddKim0712/Sior_study_Iot.git
4. 해당 디렉터리 내에 study-env 폴더가 있으면 성공

--------------------------
📁 study-env/

├── 📁 cpp-dev (C++ 공부용)

├── 📁 platformio (ESP32 Arduino 공부용)

└── 📁 esp-idf (ESP32 ESP-IDF 공식SDK 공부용)


### 📌 [환경1] C++ 개발 환경 사용하기
① Git Bash에서 다음 입력:

<pre> cd cpp-dev code . </pre>
② VSCode 상단 메뉴에서:
Ctrl+Shift+P → Remote-Containers: Reopen in Container 선택

최초 실행 시 시간이 걸릴 수 있음

③ 컨테이너 진입 후 VSCode 터미널에서 다음 입력:

<pre> mkdir build && cd build cmake .. make ./main </pre>
✅ 아래 메시지가 출력되면 성공

<pre> Hello, C++ world! </pre>
### 📌 [환경2] PlatformIO (ESP32 Arduino) 환경 사용하기
① Git Bash에서 다음 입력:

<pre> cd platformio code . </pre>
② VSCode 상단 메뉴에서:
Ctrl+Shift+P → Remote-Containers: Reopen in Container 선택

최초 실행 시 시간이 걸릴 수 있음

③ ESP32 보드를 USB 포트에 연결

④ VSCode 좌측 PlatformIO 탭에서:
Build → Upload → Monitor 클릭

✅ 아래 메시지가 출력되면 성공

<pre> Hello ESP32 PlatformIO! </pre>
### 📌 [환경3] ESP-IDF (ESP32 공식 SDK) 환경 사용하기
① Git Bash에서 다음 입력:

<pre> cd esp-idf code . </pre>
② VSCode 상단 메뉴에서:
Ctrl+Shift+P → Remote-Containers: Reopen in Container 선택

최초 실행 시 시간이 걸릴 수 있음

③ ESP32 보드를 USB 포트에 연결

④ VSCode 터미널에서 다음 명령어 입력:

<pre> . /opt/esp-idf/export.sh idf.py build idf.py -p [포트이름] flash monitor </pre>
⚠️ [포트이름]은 ESP32가 연결된 포트로, Windows에서는 보통 COM3, COM4 등

(예시)

<pre> idf.py -p COM3 flash monitor </pre>
✅ 아래 메시지가 반복 출력되면 성공

<pre> Hello from ESP-IDF! </pre>



