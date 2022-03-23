#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "[Brain]: default constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "[Brain]: destructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
	std::cout << "[Brain]: copy constructor called" << std::endl;
	for (int it = 0; it < 100; ++it)
		this->m_ideas[it] = other.m_ideas[it];
}

Brain&	Brain::operator = (const Brain &other)
{
	if (this != &other)
	{
		for (int it = 0; it < 100; ++it)
			this->m_ideas[it] = other.m_ideas[it];
	}
	return *this;
}
