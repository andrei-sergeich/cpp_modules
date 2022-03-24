#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#define COUNT 4

class MateriaSource : public IMateriaSource
{
private:
	AMateria*	m_materias[COUNT];

public:
	MateriaSource();
	virtual ~MateriaSource();

	MateriaSource(const MateriaSource& other);
	MateriaSource&	operator=(const MateriaSource& other);

	virtual void		learnMateria(AMateria* m);
	virtual AMateria*	createMateria(std::string const & type);
};

#endif
