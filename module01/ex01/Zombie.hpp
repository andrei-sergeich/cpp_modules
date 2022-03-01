#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <cstdlib>
#include <sstream>

class Zombie
{
private:
	std::string	m_name;
	static int	m_index;

public:
	Zombie();
	Zombie(std::string name);
	~Zombie();

	void	announce(void);
	void	setName(std::string name);
};

Zombie*	zombieHorde(int N, std::string name);

#endif
