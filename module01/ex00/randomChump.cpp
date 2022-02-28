#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie	anotherZombie(name);

	anotherZombie.announce();
}
