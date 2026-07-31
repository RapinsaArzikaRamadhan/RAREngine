cmake_minimum_required(VERSION 3.16)

project(RAREngine VERSION 0.0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(RAREngine
    src/Main.cpp
)

target_include_directories(RAREngine PRIVATE
    external/raylib-6.0_linux_amd64/include
)

target_link_directories(RAREngine PRIVATE
    external/raylib-6.0_linux_amd64/lib
)

target_link_libraries(RAREngine PRIVATE
    raylib
)