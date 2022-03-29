#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
private:

public:
	Intern();
	~Intern();

	Intern(const Intern &other);
	Intern&	operator=(const Intern& other);

	Form*	makeForm(const std::string& name, const std::string& target);

	class WrongFormNameException : public std::exception
	{
	private:
		std::string	_errMsg;

	public:
		WrongFormNameException (const std::string& errMsg);
		~WrongFormNameException () throw ();

		const char *what() const throw();
	};
};

#endif
