#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie	*horde;

	if (N > 0)
	{
		horde = new Zombie[N];
		for (int it = 0; it < N; it++)
			horde[it] = Zombie(name);
		return horde;
	}
	return NULL;
}
