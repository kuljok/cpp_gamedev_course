cmake_minimum_required(VERSION 2.6)
project(hello)

set(CMAKE_CXX_STANDARD 17)

add_library(${PROJECT_NAME} hello.cpp hello.h)
