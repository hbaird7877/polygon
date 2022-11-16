cmake_minimum_required(VERSION 3.23)
project(polygon)

set(CMAKE_CXX_STANDARD 17)

add_library(polygon SHARED triangle.cpp square.cpp)

