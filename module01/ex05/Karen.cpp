#include "Karen.hpp"

Karen::Karen() {};

Karen::~Karen() {};

void	debug(void)
{
	std::cout << "[DEBUG]: "
			  << "I love having extra bacon for my "
			  << "7XL-double-cheese-triple-pickle-specialketchup burger. "
			  << "I really do!" << std::endl;
}

void	info(void)
{
	std::cout << "[INFO]: "
			  << "I cannot believe adding extra bacon costs more money. "
			  << "You didn’t put enough bacon in my burger! "
			  << "If you did, I wouldn’t be asking for more!" << std::endl;
}

void	warning(void)
{
	std::cout << "[WARNING]: "
			  << "I think I deserve to have some extra bacon for free. "
			  << "I’ve been coming for years whereas you started working "
			  << "here since last month." << std::endl;
}

void	error(void)
{
	std::cout << "[ERROR]: "
			  << "This is unacceptable! I want to speak to the manager now."
			  << std::endl;
}

void	Karen::complain(std::string level)
{
	void	(Karen::*fcnPtr[4])(void) = {
			&Karen::debug,
			&Karen::info,
			&Karen::warning,
			&Karen::error
	};

	std::string	array[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			it = 0;

	while (!array[it].empty() && array[it] != level)
		it++;

	switch (it)
	{
		default:
			std::cout << "Wrong level. "
					  << "Usage: 'DEBUG', 'INFO', 'WARNING' or 'ERROR'"
					  << std::endl;
			break;
		case 0:
			(this->*fcnPtr[0])();
			break;
		case 1:
			(this->*fcnPtr[1])();
			break;
		case 2:
			(this->*fcnPtr[2])();
			break;
		case 3:
			(this->*fcnPtr[3])();
			break;
	}
}
