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

set(01EX00
        module01/ex00/Zombie.hpp
        module01/ex00/Zombie.cpp
        module01/ex00/newZombie.cpp
        module01/ex00/randomChump.cpp
        module01/ex00/main.cpp
        )

set(01EX01
        module01/ex01/Zombie.hpp
        module01/ex01/Zombie.cpp
        module01/ex01/ZombieHorde.cpp
        module01/ex01/main.cpp
        )

set(01EX02
        module01/ex02/main.cpp
        )

add_executable(cpp_modules ${01EX02})
