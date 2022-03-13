#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	cat("Vasya");
	ClapTrap	dog("Rex");
	ClapTrap	x;

	x.attack("cat");

	for (int i = 0; i < 15; ++i)
		dog.attack("human");

	std::cout << dog.getEnergyPoints() << std::endl;

	dog.takeDamage(5);
//	dog.takeDamage(10);
//	dog.takeDamage(10);
	dog.attack("cat");
	dog.beRepaired(5);
	cat.takeDamage(10);
	cat.attack("cat");
	cat.beRepaired(5);
	x.beRepaired(15);

	return 0;
}
