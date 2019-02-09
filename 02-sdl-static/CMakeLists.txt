cmake_minimum_required(VERSION 3.10)
project(02_sdl_static)

set(CMAKE_CXX_STANDARD 17)

add_executable(${PROJECT_NAME} main.cpp)

find_library(SDL2_LIB libSDL2d.a PATHS ~/Downloads/sdl-)

# find_package(SDL2D REQUIRED)
set(SDL2_INCLUDE_DIRS "~/Downloads/SDL2-2.0.9/include" CACHE PATH "SDL2 Include directory")
target_include_directories(${PROJECT_NAME} PRIVATE ${SDL2_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} "${SDL2_LIB}" -L/usr/local/lib -Wl,-rpath,/usr/local/lib -Wl,--enable-new-dtags
        -lunwind-generic -lunwind -lsndio -ldl -lm -Wl,--no-undefined -pthread
        )