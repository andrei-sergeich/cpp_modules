#include "Zombie.hpp"
#define COUNT 5

int	main(void)
{
//	Zombie	bbb("cc");
	Zombie*	zombicks = zombieHorde(COUNT, "Trupik");

	for (int it = 0; it < COUNT; it++)
		zombicks[it].announce();

	delete[] zombicks;
	return 0;
}
