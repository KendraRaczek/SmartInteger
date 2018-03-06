cmake_minimum_required(VERSION 3.8)
project(Assignment5)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp SmartInteger.cpp SmartInteger.hpp)
add_executable(Assignment5 ${SOURCE_FILES} SmartInteger.cpp SmartInteger.hpp)