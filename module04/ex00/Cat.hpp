#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat: virtual public Animal
{
public:
	Cat();
	virtual ~Cat();
	Cat(const Cat &other);
	Cat&	operator = (const Cat &other);

	virtual void 	makeSound() const;

protected:

};


#endif
