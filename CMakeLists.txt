cmake_minimum_required(VERSION 3.16)

project(RAREngine VERSION 0.0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(X11 REQUIRED)

add_executable(RAREngine
    src/main.cpp
    src/Core/Engine.cpp
    src/Core/Renderer.cpp
    src/Core/Time.cpp
    src/Core/Config.cpp
    src/Core/Input.cpp
    src/Application.cpp
)

target_include_directories(RAREngine PRIVATE
    include
    external/raylib-opengl21/src
)

target_link_directories(RAREngine PRIVATE
    external/raylib-opengl21/src
)

target_link_libraries(RAREngine PRIVATE
    raylib
    X11
    GL
    m
    pthread
    dl
)