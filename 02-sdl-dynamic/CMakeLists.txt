cmake_minimum_required(VERSION 3.10)
project(02_sdl_dynamic)

set(CMAKE_CXX_STANDARD 17)

add_executable(${PROJECT_NAME} main.cpp)

find_package(SDL2 REQUIRED)
target_link_libraries(${PROJECT_NAME} -lSDL2-2.0d)
