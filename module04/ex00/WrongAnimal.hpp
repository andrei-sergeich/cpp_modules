#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
public:
	WrongAnimal();
	virtual ~WrongAnimal();
	WrongAnimal(const WrongAnimal &other);
	WrongAnimal&	operator = (const WrongAnimal &other);

	const std::string&	getType() const;
	void 				makeSound() const;

protected:
	std::string		m_type;
	WrongAnimal(std::string type);
};

#endif
