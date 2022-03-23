#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: virtual public Animal
{
public:
	Cat();
	virtual ~Cat();
	Cat(const Cat &other);
	Cat&	operator = (const Cat &other);

	virtual void 	makeSound() const;

private:
	Brain	*m_brain;
};

#endif
