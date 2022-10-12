cmake_minimum_required(VERSION 3.23)
project(numcpp)

set(CMAKE_CXX_STANDARD 17)

add_library(numcpp library.cpp testing.cpp)
add_executable(tests testing.cpp)