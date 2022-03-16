#include "DiamondTrap.hpp"

int	main()
{
//	DiamondTrap	d;
	DiamondTrap	n("Vasya");
	FragTrap	f("Frag");
	ScavTrap	s("Scav");
	ClapTrap	c("Clap");

//	std::cout << d.getName() << std::endl;
	std::cout << n.getAttackDamage() << std::endl;
	std::cout << f.getAttackDamage() << std::endl;
	std::cout << s.getAttackDamage() << std::endl;
	std::cout << c.getAttackDamage() << std::endl;
//	d.highFivesGuys();
	n.highFivesGuys();
	n.getName();
	n.attack("Bill");
//	d.whoAmI();
	n.whoAmI();

	return 0;
}
