cmake_minimum_required(VERSION 3.23)
project(geometry)

set(CMAKE_CXX_STANDARD 20)

add_executable(cores geom.h cores.cpp)
add_executable(main cat-n-mouse.cpp geom.h)
add_executable(codef cf.cpp)