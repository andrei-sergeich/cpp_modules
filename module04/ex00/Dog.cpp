#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "[Dog]: default constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "[Dog]: destructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other.m_type)
{
	std::cout << "[Dog]: copy constructor called" << std::endl;
}

Dog&	Dog::operator = (const Dog &other)
{
	m_type = other.m_type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << m_type << " : \"Woof\"" << std::endl;
}
