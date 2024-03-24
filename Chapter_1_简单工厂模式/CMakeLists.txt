cmake_minimum_required(VERSION 3.27)
project(Chapter_1_)

set(CMAKE_CXX_STANDARD 17)

add_executable(Chapter_1_ main.cpp
        Operation.cpp
        Operation.h
        CreateOperate.cpp
        CreateOperate.h)
