#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int	main()
{
	IMateriaSource* src = new MateriaSource();
	Ice	*i = new Ice();
	src->learnMateria(i);
	delete i;
	// src->createMateria("ice");
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	AMateria* temp = me->getMateria(0);
	AMateria* temp2 = me->getMateria(1);

	me->unequip(0);
	me->unequip(1);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
	delete temp;
	delete temp2;

	return 0;
}
