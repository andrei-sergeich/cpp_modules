#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Chinusha"), _grade(150) {}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name), _grade(grade)
{
	try
	{

	}
	catch (declaration)
	{
		
	}
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name), _grade(other._grade) {}

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


	--_grade;
}

void	Bureaucrat::gradeDown()
{


	++_grade;
}

std::ostream&	operator<<(std::ostream &out, const Bureaucrat &other)
{
	out << other.getName() << ", bureaucrat grade " << other.getGrade() << ".";
	return out;
}
