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

set(01EX03
        module01/ex03/Weapon.hpp
        module01/ex03/Weapon.cpp
        module01/ex03/HumanA.hpp
        module01/ex03/HumanA.cpp
        module01/ex03/HumanB.hpp
        module01/ex03/HumanB.cpp
        module01/ex03/main.cpp
        )

set(01EX04
        module01/ex04/main.cpp
        )

set(01EX05
        module01/ex05/Karen.hpp
        module01/ex05/Karen.cpp
        module01/ex05/main.cpp
        )

set(01EX06
        module01/ex06/Karen.hpp
        module01/ex06/Karen.cpp
        module01/ex06/main.cpp
        )

set(02EX00
        module02/ex00/Fixed.hpp
        module02/ex00/Fixed.cpp
        module02/ex00/main.cpp
        )

set(02EX01
        module02/ex01/Fixed.hpp
        module02/ex01/Fixed.cpp
        module02/ex01/main.cpp
        )

set(02EX02
        module02/ex02/Fixed.hpp
        module02/ex02/Fixed.cpp
        module02/ex02/main.cpp
        )

set(02EX03
        module02/ex03/Point.hpp
        module02/ex03/Point.cpp
        module02/ex03/Fixed.hpp
        module02/ex03/Fixed.cpp
        module02/ex03/bsp.cpp
        module02/ex03/main.cpp
        )

set(03EX00
        module03/ex00/ClapTrap.hpp
        module03/ex00/ClapTrap.cpp
        module03/ex00/main.cpp
        )

set(03EX01
        module03/ex01/ScavTrap.hpp
        module03/ex01/ScavTrap.cpp
        module03/ex01/ClapTrap.hpp
        module03/ex01/ClapTrap.cpp
        module03/ex01/main.cpp
        )

set(03EX02
        module03/ex02/FragTrap.hpp
        module03/ex02/FragTrap.cpp
        module03/ex02/ScavTrap.hpp
        module03/ex02/ScavTrap.cpp
        module03/ex02/ClapTrap.hpp
        module03/ex02/ClapTrap.cpp
        module03/ex02/main.cpp
        )

set(03EX03
        module03/ex03/DiamondTrap.hpp
        module03/ex03/DiamondTrap.cpp
        module03/ex03/FragTrap.hpp
        module03/ex03/FragTrap.cpp
        module03/ex03/ScavTrap.hpp
        module03/ex03/ScavTrap.cpp
        module03/ex03/ClapTrap.hpp
        module03/ex03/ClapTrap.cpp
        module03/ex03/main.cpp
        )

set(04EX00
        module04/ex00/WrongCat.hpp
        module04/ex00/WrongCat.cpp
        module04/ex00/WrongAnimal.hpp
        module04/ex00/WrongAnimal.cpp
        module04/ex00/Cat.hpp
        module04/ex00/Cat.cpp
        module04/ex00/Dog.hpp
        module04/ex00/Dog.cpp
        module04/ex00/Animal.hpp
        module04/ex00/Animal.cpp
        module04/ex00/main.cpp
        )

set(04EX01
        module04/ex01/Brain.hpp
        module04/ex01/Brain.cpp
        module04/ex01/WrongCat.hpp
        module04/ex01/WrongCat.cpp
        module04/ex01/WrongAnimal.hpp
        module04/ex01/WrongAnimal.cpp
        module04/ex01/Cat.hpp
        module04/ex01/Cat.cpp
        module04/ex01/Dog.hpp
        module04/ex01/Dog.cpp
        module04/ex01/Animal.hpp
        module04/ex01/Animal.cpp
        module04/ex01/main.cpp
        )

set(04EX02
        module04/ex02/Brain.hpp
        module04/ex02/Brain.cpp
        module04/ex02/Cat.hpp
        module04/ex02/Cat.cpp
        module04/ex02/Dog.hpp
        module04/ex02/Dog.cpp
        module04/ex02/Animal.hpp
        module04/ex02/Animal.cpp
        module04/ex02/main.cpp
        )

add_executable(cpp_modules ${04EX02})
