#include "Zombie.hpp"
#define COUNT 5

int	main(void)
{
	std::string	name;

	std::cout << "Enter name of zombie: ";
	if (!std::getline(std::cin, name))
		exit(EXIT_FAILURE);

	Zombie*	zombicks = zombieHorde(COUNT, name);

	for (int it = 0; it < COUNT; it++)
		zombicks[it].announce();

	delete[] zombicks;
	return 0;
}
