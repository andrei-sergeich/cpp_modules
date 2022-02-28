#include "Zombie.hpp"

int	main(void)
{
	Zombie*	zombick = newZombie("Trupik");

	zombick->announce();
	randomChump("NewMeet");
	delete zombick;
	return 0;
}
