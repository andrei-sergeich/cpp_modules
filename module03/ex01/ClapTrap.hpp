#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

# define GREEN	"\x1B[0;92m"
# define YELLOW	"\x1B[0;93m"
# define BLUE	"\x1B[0;94m"
# define PINK	"\x1B[0;95m"
# define CYAN	"\x1B[0;96m"
# define WHITE	"\x1B[38;5;15m"
# define GREY	"\x1B[38;5;8m"
# define ORANGE	"\x1B[38;5;202m"
# define RED	"\x1B[38;5;160m"
# define RESET	"\033[0m"

class ClapTrap
{
public:
	ClapTrap();
	virtual ~ClapTrap();
	ClapTrap(const std::string name);
	ClapTrap(const ClapTrap &other);

	const std::string&	getName() const;
	int					getHitPoints() const;
	int					getEnergyPoints() const;
	int					getAttackDamage() const;

	virtual void		attack(const std::string& target);
	void				takeDamage(unsigned int amount);
	void				beRepaired(unsigned int amount);

	ClapTrap&	operator = (const ClapTrap &other);

protected:
	std::string		m_name;
	int				m_hitPoints;
	int				m_energyPoints;
	int				m_attackDamage;

	ClapTrap(int hitPoints, int energyPoints, int attackDamage, std::string name="Claper");
};

#endif
