cmake_minimum_required(VERSION 2.6)
project(helloapp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_BUILD_TYPE RelWithDebInfo)

target_include_directories(${PROJECT_SOURCE_DIR}/hellolib)
add_subdirectory(hellolib)

add_executable(helloapp main.cpp)
target_link_libraries(helloapp hello)