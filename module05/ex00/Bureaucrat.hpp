#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include "colors.hpp"

class Bureaucrat
{
private:
	const std::string	_name;
	int					_grade; // from 150 to 1

public:
	Bureaucrat();
	Bureaucrat(const std::string& name, int grade);
	~Bureaucrat();

	Bureaucrat(const Bureaucrat &other);
	Bureaucrat&	operator=(const Bureaucrat &other);

	const std::string&	getName() const;
	int					getGrade() const;
	void				gradeUp();
	void				gradeDown();

	class GradeTooHighException : public std::exception
	{
	private:
		std::string	_errMsg;

	public:
		GradeTooHighException (const std::string& errMsg);
		~GradeTooHighException () throw ();

		const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	private:
		std::string	_errMsg;

	public:
		GradeTooLowException (const std::string& errMsg);
		~GradeTooLowException () throw ();

		const char *what() const throw();
	};
};

std::ostream&	operator<<(std::ostream &out, const Bureaucrat &other);

#endif
