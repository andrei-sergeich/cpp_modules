#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "[Cat]: default constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "[Cat]: destructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other.m_type)
{
	std::cout << "[Cat]: copy constructor called" << std::endl;
}

Cat&	Cat::operator = (const Cat &other)
{
	m_type = other.m_type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << m_type << " : \"Meow\"" << std::endl;
}
