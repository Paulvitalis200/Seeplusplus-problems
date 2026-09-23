cmake_minimum_required(VERSION 3.20)
project(Seeplusplus_problems)

set(CMAKE_CXX_STANDARD 20)

add_executable(advanced_1
        ADVANCED/1/main.cpp
        ADVANCED/1/Rectangle.cpp
        ADVANCED/1/Rectangle.h)

add_executable(advanced_2
        ADVANCED/2/main.cpp
        ADVANCED/2/Length.cpp
        ADVANCED/2/Length.h)
