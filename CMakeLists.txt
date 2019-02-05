cmake_minimum_required(VERSION 3.9)
project(algorithms)

set(CMAKE_CXX_STANDARD 14)

add_executable(algorithms main.cpp src/strings.h src/strings.cpp tests/strings_test.cpp)