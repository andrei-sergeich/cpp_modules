#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(100, 50, 30, "Defaulter_diamond_clap"),
							 ScavTrap("Defaulter_scav"),
							 FragTrap("Defaulter_frag"),
							 m_name("Defaulter_diamond")
{
	std::cout << CYAN
			  << "[DiamondTrap] default constructor: variables are "
			  "initialized with default values"
			  << RESET  << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << ORANGE << "[DiamondTrap] destructor: " << m_name << " terminated!" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(100,
													  50,
													  30,
													  name + "_clap_name"),
											 ScavTrap(name),
											 FragTrap(name),
											 m_name(name)
{
	std::cout << GREEN
			  << "[DiamondTrap] constructor with a name: "
			  << m_name
			  << " created!" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other.m_hitPoints,
													 other.m_energyPoints,
													 other.m_attackDamage,
													 other.m_name + "_clap_name"),
													 ScavTrap(other.m_name),
													 FragTrap(other.m_name),
													 m_name(other.m_name)
{
	std::cout << WHITE
			  << "[DiamondTrap] copy constructor called" << RESET << std::endl;
}

void	DiamondTrap::attack(std::string const& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << GREY
			  << "[DiamondTrap] whoAmI: "
			  << "I am " << m_name << " and my ClapTraps's name is "
			  << ClapTrap::m_name << RESET << std::endl;
}

DiamondTrap&	DiamondTrap::operator = (const DiamondTrap &other)
{
	m_name = other.m_name;
	m_hitPoints = other.m_hitPoints;
	m_energyPoints = other.m_energyPoints;
	m_attackDamage = other.m_attackDamage;
	return *this;
}
