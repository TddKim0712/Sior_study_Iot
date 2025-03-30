FROM ubuntu:24.04
RUN apt update && apt install -y python3 python3-pip git
RUN pip3 install platformio
RUN useradd -ms /bin/bash dev
USER dev
WORKDIR /home/dev/project
