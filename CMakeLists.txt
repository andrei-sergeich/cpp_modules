cmake_minimum_required(VERSION 3.21)
project(cpp_modules)

set(CMAKE_CXX_STANDARD 98)

set(00EX00
        module00/ex00/megaphone.cpp
        )

set(00EX01
        module00/ex01/Contact.hpp
        module00/ex01/Contact.cpp
        module00/ex01/PhoneBook.hpp
        module00/ex01/PhoneBook.cpp
        module00/ex01/main.cpp
        )

set(00EX02
        module00/ex02/Account.hpp
        module00/ex02/Account.cpp
        module00/ex02/test.cpp
        )

add_executable(cpp_modules ${00EX02})
