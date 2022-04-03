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

set(04EX03
        module04/ex03/MateriaSource.hpp
        module04/ex03/MateriaSource.cpp
        module04/ex03/IMateriaSource.hpp
        module04/ex03/Character.hpp
        module04/ex03/Character.cpp
        module04/ex03/ICharacter.hpp
        module04/ex03/Cure.hpp
        module04/ex03/Cure.cpp
        module04/ex03/Ice.hpp
        module04/ex03/Ice.cpp
        module04/ex03/AMateria.hpp
        module04/ex03/AMateria.cpp
        module04/ex03/main.cpp
        )

set(05EX00
        module05/ex00/Bureaucrat.hpp
        module05/ex00/Bureaucrat.cpp
        module05/ex00/colors.hpp
        module05/ex00/main.cpp
        )

set(05EX01
        module05/ex01/Form.hpp
        module05/ex01/Form.cpp
        module05/ex01/Bureaucrat.hpp
        module05/ex01/Bureaucrat.cpp
        module05/ex01/colors.hpp
        module05/ex01/main.cpp
        )

set(05EX02
        module05/ex02/PresidentialPardonForm.hpp
        module05/ex02/PresidentialPardonForm.cpp
        module05/ex02/RobotomyRequestForm.hpp
        module05/ex02/RobotomyRequestForm.cpp
        module05/ex02/ShrubberyCreationForm.hpp
        module05/ex02/ShrubberyCreationForm.cpp
        module05/ex02/Form.hpp
        module05/ex02/Form.cpp
        module05/ex02/Bureaucrat.hpp
        module05/ex02/Bureaucrat.cpp
        module05/ex02/colors.hpp
        module05/ex02/main.cpp
        )

set(05EX03
        module05/ex03/Intern.hpp
        module05/ex03/Intern.cpp
        module05/ex03/PresidentialPardonForm.hpp
        module05/ex03/PresidentialPardonForm.cpp
        module05/ex03/RobotomyRequestForm.hpp
        module05/ex03/RobotomyRequestForm.cpp
        module05/ex03/ShrubberyCreationForm.hpp
        module05/ex03/ShrubberyCreationForm.cpp
        module05/ex03/Form.hpp
        module05/ex03/Form.cpp
        module05/ex03/Bureaucrat.hpp
        module05/ex03/Bureaucrat.cpp
        module05/ex03/colors.hpp
        module05/ex03/main.cpp
        )

set(06EX00
        module06/ex00/Converter.hpp
        module06/ex00/Converter.cpp
        module06/ex00/main.cpp
        )

set(06EX01
        module06/ex01/main.cpp
        )

set(06EX02
        module06/ex02/C.hpp
        module06/ex02/B.hpp
        module06/ex02/A.hpp
        module06/ex02/Base.hpp
        module06/ex02/main.cpp
        )

set(07EX00
        module07/ex00/templates.hpp
        module07/ex00/main.cpp
        )

set(07EX01
        module07/ex01/iter.hpp
        module07/ex01/main.cpp
        )

set(07EX02
        module07/ex02/Array.hpp
        module07/ex02/Array.tpp
        module07/ex02/main.cpp
        )

set(08EX00
        module08/ex00/easyfind.hpp
#        module08/ex00/easyfind.tpp
        module08/ex00/main.cpp
        )

add_executable(cpp_modules ${06EX00})
