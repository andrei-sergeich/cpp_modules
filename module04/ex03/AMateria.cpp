#include "AMateria.hpp"

AMateria::AMateria() : m_type("D_Materia") {}

AMateria::AMateria(std::string const & type) : m_type(type) {}

AMateria::~AMateria() {}

AMateria::AMateria(const AMateria& other) : m_type(other.m_type) {}

AMateria&	AMateria::operator=(const AMateria& other)
{
	if (this != &other)
		this->m_type = other.m_type;
	return *this;
}

std::string const& AMateria::getType() const
{
	return m_type;
}

void	AMateria::use(ICharacter& target)
{
	std::cout << target.getName() << std::endl;
}