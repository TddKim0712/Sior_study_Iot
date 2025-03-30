FROM ubuntu:24.04
RUN apt update && apt install -y git wget flex bison gperf python3 python3-pip cmake ninja-build ccache libffi-dev libssl-dev dfu-util
WORKDIR /opt
RUN git clone --recursive https://github.com/espressif/esp-idf.git
WORKDIR /opt/esp-idf
RUN ./install.sh
RUN useradd -ms /bin/bash dev
USER dev
WORKDIR /home/dev/project
