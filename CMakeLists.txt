cmake_minimum_required(VERSION 3.15)
project(Test001)

set(CMAKE_CXX_STANDARD 14)

add_executable(Test001 main.cpp )
add_executable(test1 test1.cpp catch.hpp)