#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(100, 50, 20)
{
	std::cout << CYAN
			  << "[ScavTrap] default constructor: variables are "
			  "initialized with default values"
			  << RESET  << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << ORANGE << "[ScavTrap] destructor: " << m_name << " terminated!" << RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(100, 50, 20, name)
{
	std::cout << GREEN
			  << "[ScavTrap] constructor with a name: "
			  << m_name
			  << " created!" << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other.m_hitPoints,
													 other.m_energyPoints,
													 other.m_attackDamage,
													 other.m_name)
{
	std::cout << WHITE
			  << "[ScavTrap] copy constructor called" << RESET << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (m_energyPoints > 0 && m_hitPoints > 0)
	{
		std::cout << "[ScavTrap] attack: " << GREEN << m_name << RESET << " attacks "
				  << BLUE << target << RESET << ", causing "
				  << m_attackDamage << " points of damage!" << std::endl;
		m_energyPoints--;
	}
	else if (m_hitPoints <= 0)
		std::cout << "[ScavTrap] attack: " << RED << m_name << RESET
				  << " is already dead!" << std::endl;
	else
		std::cout << "[ScavTrap] attack: " << RED << m_name << RESET
				  << " doesn't have enough energy points!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "[ScavTrap] guardGate: " << GREEN
			  << m_name << RESET
			  << " has entered in Gate keeper mode" << std::endl;
}

ScavTrap&	ScavTrap::operator = (const ScavTrap &other)
{
	m_name = other.m_name;
	m_hitPoints = other.m_hitPoints;
	m_energyPoints = other.m_energyPoints;
	m_attackDamage = other.m_attackDamage;
	return *this;
}
