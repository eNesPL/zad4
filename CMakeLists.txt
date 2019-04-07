cmake_minimum_required(VERSION 3.13)
project(zad4)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++ -static")
add_executable(zad4 main.cpp)