cmake_minimum_required(VERSION 3.2)
project(eigen_block)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(include)

set(SOURCE_FILES main.cpp)
add_executable(eigen_block ${SOURCE_FILES} MyClass.cpp MyClass.h)