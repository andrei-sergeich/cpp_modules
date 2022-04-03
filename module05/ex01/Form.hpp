#ifndef FORM_HPP
#define FORM_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <exception>
# include "colors.hpp"
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string	_name;
	bool				_isSigned;
	int			 		_gradeToSign;
	int					_gradeToExecute;

public:
	Form();
	Form(const std::string& name, int gradeToSign, int gradeToExecute);
	virtual ~Form();

	Form(const Form &other);
	Form&	operator=(const Form& other);

	const std::string&	getName() const;
	bool				getIsSigned() const;
	int					getGradeToSign() const;
	int					getGradeToExecute() const;

	void 				beSigned(const Bureaucrat& bur);

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

std::ostream&	operator<<(std::ostream &out, const Form &other);

#endif
