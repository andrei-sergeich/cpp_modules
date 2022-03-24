#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#define SIZE 4

class Character : virtual public ICharacter
{
private:
	std::string		m_name;
	AMateria*		m_slot[SIZE];

public:
	Character();
	Character(std::string name);
	virtual ~Character();

	Character(const Character& other);
	Character&	operator=(const Character& other);

	virtual std::string const & getName() const;

	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};

#endif
