cmake_minimum_required(VERSION 3.30)
project(IST_LR5)

set(CMAKE_CXX_STANDARD 20)

add_executable(IST_LR5 main.cpp
        Zhukov_LR5_part1/Zhukov_MathTask.h
        Zhukov_LR5_part1/Zhukov_MathTask.cpp
        Zhukov_LR5_part1/Zhukov_MathTask_Test.cpp)
