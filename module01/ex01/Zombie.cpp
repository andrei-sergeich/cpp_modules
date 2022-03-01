#include "Zombie.hpp"

int	Zombie::m_index(1);

Zombie::Zombie() {};

Zombie::Zombie(std::string name) : m_name(name)
{
	std::cout << m_name << " risen!" << std::endl;
};

Zombie::~Zombie()
{
	std::cout << m_name << " is dead :...(" << std::endl;
}

void	Zombie::announce()
{
	std::cout << m_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	std::stringstream	ss;

	ss << m_index;
	m_name = name + "-" + ss.str();
	std::cout << m_name << " risen!" << std::endl;
	m_index++;
}
