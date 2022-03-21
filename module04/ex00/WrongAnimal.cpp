#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : m_type("WrongAnimal")
{
	std::cout << "[WrongAnimal]: default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "[WrongAnimal]: destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): m_type(type)
{
	std::cout << "[WrongAnimal]: constructor with a type called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : m_type(other.m_type)
{
	std::cout << "[WrongAnimal]: copy constructor called" << std::endl;
}

WrongAnimal&	WrongAnimal::operator = (const WrongAnimal &other)
{
	m_type = other.m_type;
	return *this;
}

const std::string&	WrongAnimal::getType() const
{
	return m_type;
}

void WrongAnimal::makeSound() const
{
	std::cout << m_type << " : \"Animal sound...\"" << std::endl;
}
