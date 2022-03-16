#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(100, 100, 30)
{
	std::cout << CYAN
			  << "[FragTrap] default constructor: variables are "
			  "initialized with default values"
			  << RESET  << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << ORANGE << "[FragTrap] destructor: " << m_name << " terminated!" << RESET << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(100, 100, 30, name)
{
	std::cout << GREEN
			  << "[FragTrap] constructor with a name: "
			  << m_name
			  << " created!" << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other.m_hitPoints,
													 other.m_energyPoints,
													 other.m_attackDamage,
													 other.m_name)
{
	std::cout << WHITE
			  << "[FragTrap] copy constructor called" << RESET << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "[FragTrap] highFivesGuys: " << PINK
			  << m_name << RESET
			  << ": High five guys!)))))" << std::endl;
}

FragTrap&	FragTrap::operator = (const FragTrap &other)
{
	m_name = other.m_name;
	m_hitPoints = other.m_hitPoints;
	m_energyPoints = other.m_energyPoints;
	m_attackDamage = other.m_attackDamage;
	return *this;
}
