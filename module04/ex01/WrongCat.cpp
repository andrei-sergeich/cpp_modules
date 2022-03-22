#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "[WrongCat]: default constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "[WrongCat]: destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other.m_type)
{
	std::cout << "[WrongCat]: copy constructor called" << std::endl;
}

WrongCat&	WrongCat::operator = (const WrongCat &other)
{
	if (this != &other)
		this->m_type = other.m_type;
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << m_type << " : \"Meow\"" << std::endl;
}
