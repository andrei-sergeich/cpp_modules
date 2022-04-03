#include "Character.hpp"

Character::Character()
{
	m_name = "D_Character";
	for (int i = 0; i < SIZE; i++)
		m_slot[i] = NULL;
}

Character::Character(std::string name)
{
	m_name = name;
	for (int i = 0; i < SIZE; i++)
		m_slot[i] = NULL;
}

Character::~Character()
{
	for (int i = 0; i < SIZE; i++)
		delete m_slot[i];
}

Character::Character(const Character& other)
{
	for (int i = 0; i < SIZE; i++)
	{
		if (m_slot[i])
			m_slot[i] = other.m_slot[i]->clone();
		else
			m_slot[i] = NULL;
	}
	this->m_name = other.m_name;
}

Character&	Character::operator=(const Character& other)
{
	if (this != &other)
	{
		for (int i = 0; i < SIZE; i++)
		{
			delete m_slot[i];
			m_slot[i] = other.m_slot[i]->clone();
		}
		this->m_name = other.m_name;
	}
	return *this;
}

std::string const& Character::getName() const
{
	return m_name;
}

AMateria* Character::getMateria(int idx)
{
	return m_slot[idx];
}

void	Character::equip(AMateria* m)
{
	if (m == NULL)
	{
		std::cout << "equip error!" << std::endl;
		return;
	}
	else
	{
		for (int i = 0; i < SIZE; i++)
		{
			if (!m_slot[i])
			{
				m_slot[i] = m->clone();
//				delete m;
				return;
			}
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ;
	m_slot[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if ((void *)&target == NULL)
	{
		std::cout << "Target is NULL" << std::endl;
		return ;
	}
	if (!m_slot[idx] || idx < 0 || idx > 3)
		std::cout << "This materia doesn't exists!" << std::endl;
	else
	{
		m_slot[idx]->use(target);
		delete m_slot[idx];
		m_slot[idx] = NULL;
	}
}
