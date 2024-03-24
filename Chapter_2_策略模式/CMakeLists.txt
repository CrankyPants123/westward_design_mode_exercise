cmake_minimum_required(VERSION 3.27)
project(Chapter_2_)

set(CMAKE_CXX_STANDARD 17)

add_executable(Chapter_2_ main.cpp
        Client.cpp
        Client.h
        CashSuper.h
        CashContext.cpp
        CashContext.h)
