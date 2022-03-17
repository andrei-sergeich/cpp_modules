#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap	n("Vasya");
	DiamondTrap	d(n);
//	d = n;
//	FragTrap	f("Frag");
//	ScavTrap	s("Scav");
//	ClapTrap	c("Clap");

//	std::cout << d.getName() << std::endl;
	std::cout << d.getAttackDamage() << std::endl;
	std::cout << n.getAttackDamage() << std::endl;
	std::cout << d.getEnergyPoints() << std::endl;
	std::cout << n.getEnergyPoints() << std::endl;
//	std::cout << f.getAttackDamage() << std::endl;
//	std::cout << s.getAttackDamage() << std::endl;
//	std::cout << c.getAttackDamage() << std::endl;
//	d.highFivesGuys();
	n.highFivesGuys();
	n.getName();
	n.attack("Bill");
	std::cout << n.getAttackDamage() << std::endl;
	d.whoAmI();
	n.whoAmI();

	return 0;
}
