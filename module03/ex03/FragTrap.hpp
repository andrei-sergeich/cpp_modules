#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap: virtual public ClapTrap
{
public:
	FragTrap();
	virtual ~FragTrap();
	FragTrap(const std::string name);
	FragTrap(const FragTrap &other);

	void highFivesGuys();

	FragTrap&	operator = (const FragTrap &other);
};

#endif
