#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog: virtual public Animal
{
public:
	Dog();
	virtual ~Dog();
	Dog(const Dog &other);
	Dog&	operator = (const Dog &other);

	virtual void 	makeSound() const;

protected:

};


#endif
