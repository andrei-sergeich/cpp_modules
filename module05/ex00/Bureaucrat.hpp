#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iomanip>
#include <string>

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
	public:
		Bureaucrat::GradeTooHighException
	};

	class Bureaucrat::GradeTooLowException : public std::exception
	{
	public:

	};
};

std::ostream&	operator<<(std::ostream &out, const Bureaucrat &other);

#endif
