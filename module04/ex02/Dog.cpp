#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), m_brain(new Brain())
{
	std::cout << "[Dog]: default constructor called" << std::endl;
}

Dog::~Dog()
{
	delete m_brain;
	std::cout << "[Dog]: destructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other.m_type), m_brain(new Brain(*other.m_brain))
{
	std::cout << "[Dog]: copy constructor called" << std::endl;
}

Dog&	Dog::operator = (const Dog &other)
{
	if (this != &other)
	{
		delete m_brain;
		this->m_type = other.m_type;
		this->m_brain = new Brain(*other.m_brain);
	}
	return *this;
}

void Dog::makeSound() const
{
	std::cout << m_type << " : \"Woof\"" << std::endl;
}
