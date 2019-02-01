cmake_minimum_required(VERSION 2.6)
project (helloworld)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_BUILD_TYPE RelWithDebInfo)

add_executable(helloworld helloworld.cpp)
