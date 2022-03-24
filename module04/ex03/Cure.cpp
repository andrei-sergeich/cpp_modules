#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::~Cure() {}

Cure::Cure(const Cure& other) : AMateria(other.m_type) {}

Cure&	Cure::operator=(const Cure& other)
{
	if (this != &other)
		this->m_type = other.m_type;
	return *this;
}

AMateria*	Cure::clone() const
{
	return (new Cure());
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
