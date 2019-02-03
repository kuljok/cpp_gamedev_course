cmake_minimum_required(VERSION 2.6)
project(helloapp)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(hellolib)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} hello)
target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/hellolib)