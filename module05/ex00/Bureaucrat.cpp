#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Chinusha"), _grade(150) {}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name)
{
	try
	{
		if (grade < 1)
			throw GradeTooHighException("The grade is too high for appointing!");
		if (grade > 150)
			throw GradeTooLowException("The grade is too low for appointing!");
		_grade = grade;
	}
	catch (std::exception& ex)
	{
		_grade = 150;
		std::cout << RED << ex.what() << RESET << std::endl;
		std::cout << YELLOW << "Bureaucrat " << _name
				  << " with default grade (" << _grade << ") appointed to the position."
				  << RESET << std::endl;
	}
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name),
												  _grade(other._grade) {}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this != &other)
	{
		const_cast<std::string&>(this->_name) = other._name;
		this->_grade = other._grade;
	}
	return *this;
}

const std::string&	Bureaucrat::getName() const
{
	return _name;
}

int	Bureaucrat::getGrade() const
{
	return _grade;
}

void	Bureaucrat::gradeUp()
{
	try
	{
		if (_grade == 1)
			throw GradeTooHighException("The grade is maximum! It's impossible to increase the grade.");
		--_grade;
	}
	catch (std::exception& ex)
	{
		std::cout << RED << ex.what() << RESET << std::endl;
	}
}

void	Bureaucrat::gradeDown()
{
	try
	{
		if (_grade == 150)
			throw GradeTooLowException("The grade is minimum! It's impossible to reduce the grade.");
		++_grade;
	}
	catch (std::exception& ex)
	{
		std::cout << RED << ex.what() << RESET << std::endl;
	}
}

std::ostream&	operator<<(std::ostream &out, const Bureaucrat &other)
{
	out << other.getName() << ", bureaucrat grade " << other.getGrade() << ".";
	return out;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(const std::string& errMsg) : _errMsg(errMsg) {}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return this->_errMsg.c_str();
}

Bureaucrat::GradeTooLowException::GradeTooLowException(const std::string& errMsg) : _errMsg(errMsg) {}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return this->_errMsg.c_str();
}
