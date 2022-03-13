#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :	m_name("Defaulter"),
						m_hitPoints(10),
						m_energyPoints(10),
						m_attackDamage(0)
{
	std::cout << CYAN
			  << "[ClapTrap] default constructor: variables are "
				 "initialized with default values"
			  << RESET  << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << ORANGE << "[ClapTrap] destructor: " << m_name << " terminated!" << RESET << std::endl;
}

ClapTrap::ClapTrap(const std::string name) :	m_name(name),
												m_hitPoints(10),
												m_energyPoints(10),
												m_attackDamage(0)
{
	std::cout << GREEN
			  << "[ClapTrap] constructor with a name: "
			  << m_name
			  << " created!" << RESET << std::endl;
}


ClapTrap::ClapTrap(const ClapTrap &other) :		m_name(other.m_name),
												m_hitPoints(other.m_hitPoints),
												m_energyPoints(other.m_energyPoints),
												m_attackDamage(other.m_attackDamage)
{
	std::cout << WHITE
			  << "[ClapTrap] copy constructor called" << RESET << std::endl;
}

const std::string&	ClapTrap::getName() const
{
	return m_name;
}

int	ClapTrap::getHitPoints() const
{
	return m_hitPoints;
}

int	ClapTrap::getEnergyPoints() const
{
	return m_energyPoints;
}

int	ClapTrap::getAttackDamage() const
{
	return m_attackDamage;
}

void	ClapTrap::attack(const std::string& target)
{
	if (m_energyPoints > 0 && m_hitPoints > 0)
	{
		std::cout << "[ClapTrap] attack: " << GREEN << m_name << RESET << " attacks "
				  << BLUE << target << RESET << ", causing "
				  << m_attackDamage << " points of damage!" << std::endl;
		m_energyPoints--;
	}
	else if (m_hitPoints <= 0)
		std::cout << "[ClapTrap] attack: " << RED << m_name << RESET
				  << " is already dead!" << std::endl;
	else
		std::cout << "[ClapTrap] attack: " << RED << m_name << RESET
				  << " doesn't have enough energy points!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (m_hitPoints <= 0)
		std::cout << "[ClapTrap] takeDamage: " << RED << m_name << RESET
				  << " is already dead!" << std::endl;
	else
	{
		m_hitPoints -= amount;
		if (m_hitPoints <= 0)
			std::cout << "[ClapTrap] takeDamage: " << GREEN << m_name << RESET << " takes "
					  << amount << " of damage and DIED!" << std::endl;
		else
			std::cout << "[ClapTrap] takeDamage: " << GREEN << m_name << RESET << " takes "
					  << amount << " of damage!" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (m_energyPoints > 0 && m_hitPoints > 0)
	{
		std::cout << "[ClapTrap] beRepaired: " << GREEN << m_name << RESET << " regained "
				  << BLUE << amount << RESET << " points of damage!" << std::endl;
		m_energyPoints--;
		m_hitPoints += amount;
	}
	else if (m_hitPoints <= 0)
		std::cout << "[ClapTrap] beRepaired: " << RED << m_name << RESET
				  << " is already dead!" << std::endl;
	else
		std::cout << "[ClapTrap] beRepaired: " << RED << m_name << RESET
				  << " doesn't have enough energy points!" << std::endl;
}

ClapTrap&	ClapTrap::operator = (const ClapTrap &other)
{
	m_name = other.m_name;
	m_hitPoints = other.m_hitPoints;
	m_energyPoints = other.m_energyPoints;
	m_attackDamage = other.m_attackDamage;
	return *this;
}
