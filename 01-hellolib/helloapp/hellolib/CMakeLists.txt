cmake_minimum_required(VERSION 2.6)
project(hello)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_BUILD_TYPE RelWithDebInfo)

add_library(hello hello.cpp hello.h)
