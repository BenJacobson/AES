cmake_minimum_required(VERSION 3.6)
project(AES)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES aes.cpp testcases.h aes.h)
add_executable(AES ${SOURCE_FILES})