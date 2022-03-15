#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	cat("Vasya");
	ClapTrap	dog("Rex");
	ClapTrap	clav;
	ScavTrap	scav("Scavick");
	ScavTrap	wow(scav);

	clav.attack("cat");

//	for (int i = 0; i < 15; ++i)
//		dog.attack("human");

	std::cout << dog.getEnergyPoints() << std::endl;

	dog.takeDamage(5);
//	dog.takeDamage(10);
//	dog.takeDamage(10);
	dog.attack("cat");
	dog.beRepaired(5);
	cat.takeDamage(10);
	cat.attack("cat");
	cat.beRepaired(5);
	clav.beRepaired(15);

	std::cout << clav.getHitPoints() << std::endl;
	std::cout << scav.getHitPoints() << std::endl;
	std::cout << wow.getName() << std::endl;
	wow.attack("lol");
	scav.guardGate();
	std::cout << wow.getEnergyPoints() << std::endl;

	return 0;
}
