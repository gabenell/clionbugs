cmake_minimum_required(VERSION 3.2)
project(eigen_block)

add_subdirectory(gmock-1.7.0)
enable_testing()

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR} ${gmock_SOURCE_DIR}/include ${gmock_SOURCE_DIR} include)

set(SOURCE_FILES main.cpp)
add_executable(eigen_block ${SOURCE_FILES} MyClass.cpp MyClass.h tests.cpp)