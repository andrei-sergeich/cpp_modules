#ifndef DIAMOND_HPP
#define DIAMOND_HPP

#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
public:
	DiamondTrap();
	virtual ~DiamondTrap();
	DiamondTrap(const std::string name);
	DiamondTrap(const DiamondTrap &other);

	virtual void	attack(std::string const &target);
	void			whoAmI(void);

	DiamondTrap&	operator = (const DiamondTrap &other);

private:
	std::string		m_name;
};

#endif
