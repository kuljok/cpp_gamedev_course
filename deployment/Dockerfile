FROM ubuntu:18.04
MAINTAINER Andrei Kuleuski, https://github.com/kuljok
RUN apt-get update && \
    apt-get upgrade -y && \
    apt-get install -y build-essential && \
    apt-get install -y cmake && \
    apt-get update && \
    apt-get install -y sndiod && \
    apt-get install -y libsndio-dev && \
    apt-get install -y libaudio-dev && \
    apt-get install -y libunwind-dev && \
    apt-get install -y libasound2-dev && \
    apt-get install -y libgegl-dev && \
    apt-get install -y libpulse-dev && \
    apt-get install -y libjack-dev && \
    apt-get update && \
    apt-get install -y wget
WORKDIR /home/downloads
RUN wget https://www.libsdl.org/release/SDL2-2.0.9.tar.gz && \
    tar -xvzf SDL2-2.0.9.tar.gz && \
    mkdir sdl2-build && \
    cd sdl2-build && \
    cmake -DCMAKE_BUILD_TYPE=Debug ../SDL2-2.0.9 && \
    cmake --build . && \
    make all && \
    make install
WORKDIR /code
