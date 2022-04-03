#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < COUNT; i++)
		m_materias[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < COUNT; i++)
		delete m_materias[i];
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	for (int i = 0; i < COUNT; i++)
	{
		if (m_materias[i])
			m_materias[i] = other.m_materias[i]->clone();
		else
			m_materias[i] = NULL;
	}
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& other)
{
	if (this != &other)
	{
		for (int i = 0; i < COUNT; i++)
		{
			delete m_materias[i];
			m_materias[i] = other.m_materias[i]->clone();
		}
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria* m)
{
	if (m == NULL)
	{
		std::cout << "learn error!" << std::endl;
		return;
	}
	else
	{
		for (int i = 0; i < COUNT; i++)
		{
			if (!m_materias[i])
			{
				m_materias[i] = m->clone();
				return;
			}
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < COUNT; i++)
	{
		if (m_materias[i] && (m_materias[i]->getType() == type))
			return m_materias[i]->clone();
	}
	std::cout << "Materia not found!" << std::endl;
	return NULL;
}
