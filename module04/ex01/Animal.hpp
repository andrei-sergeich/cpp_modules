#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
public:
	Animal();
	virtual ~Animal();
	Animal(const Animal &other);
	Animal&	operator = (const Animal &other);

	virtual const std::string&	getType() const;
	virtual void 				makeSound() const;

protected:
	std::string		m_type;
	Animal(std::string type);
};

#endif
