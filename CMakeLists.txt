cmake_minimum_required(VERSION 3.21)
project(cpp_modules)

set(CMAKE_CXX_STANDARD 11)

set(00EX00
        module00/ex00/megaphone.cpp
        )

add_executable(cpp_modules ${00EX00})

