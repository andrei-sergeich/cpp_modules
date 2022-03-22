#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat: virtual public WrongAnimal
{
public:
	WrongCat();
	virtual ~WrongCat();
	WrongCat(const WrongCat &other);
	WrongCat&	operator = (const WrongCat &other);

	void 	makeSound() const;

protected:

};


#endif
