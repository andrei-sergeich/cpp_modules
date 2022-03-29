#include "Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(const Intern &other)
{
	*this = other;
}

Intern&	Intern::operator=(const Intern& other)
{
	return *this;
}

Form*	Intern::makeForm(const std::string& name, const std::string& target)
{
	Form*	formsList[3] = {
			new ShrubberyCreationForm(target),
			new RobotomyRequestForm(target),
			new PresidentialPardonForm(target)
	};

	for (int i = 0; i < 3; ++i)
	{
		if (formsList[i]->getName() == name)
		{
			std::cout << "Intern creates " << name << std::endl;
			for (int j = 0; j < 3; j++)
			{
				if (j == i)
					continue;
				delete formsList[j];
			}
			return formsList[i];
		}
	}
	for (int i = 0; i < 3; ++i)
		delete formsList[i];
	throw WrongFormNameException(std::string(RED "Intern can't create "
											 + name + " because there is no such form" + RESET).c_str());
}

Intern::WrongFormNameException::WrongFormNameException(const std::string& errMsg) : _errMsg(errMsg) {}

Intern::WrongFormNameException::~WrongFormNameException() throw() {}

const char *Intern::WrongFormNameException::what() const throw()
{
	return this->_errMsg.c_str();
}
