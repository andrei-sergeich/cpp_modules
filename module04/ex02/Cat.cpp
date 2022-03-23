#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), m_brain(new Brain())
{
	std::cout << "[Cat]: default constructor called" << std::endl;
}

Cat::~Cat()
{
	delete m_brain;
	std::cout << "[Cat]: destructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other.m_type), m_brain(new Brain(*other.m_brain))
{
	std::cout << "[Cat]: copy constructor called" << std::endl;
}

Cat&	Cat::operator = (const Cat &other)
{
	if (this != &other)
	{
		delete m_brain;
		this->m_type = other.m_type;
		this->m_brain = new Brain(*other.m_brain);
	}
	return *this;
}

void Cat::makeSound() const
{
	std::cout << m_type << " : \"Meow\"" << std::endl;
}
