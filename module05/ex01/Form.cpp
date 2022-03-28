#include "Form.hpp"

Form::Form() : _name("Bumajka"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150) {}

Form::Form(const std::string& name, int gradeToSign, int gradeToExecute) : _name(name), _isSigned(false)
{
	try
	{
		if (gradeToSign < 1)
			throw GradeTooHighException("The grade to sign is too high for make a form!");
		if (gradeToSign > 150)
			throw GradeTooLowException("The grade to sign is too low for make a form!");
		if (gradeToExecute < 1)
			throw GradeTooHighException("The grade to execute is too high for make a form!");
		if (gradeToExecute > 150)
			throw GradeTooLowException("The grade to execute is too low for make a form!");
		_gradeToSign = gradeToSign;
		_gradeToExecute = gradeToExecute;
	}
	catch (std::exception& ex)
	{
		if (gradeToSign > 150 || gradeToSign < 1)
		{
			_gradeToSign = 150;
			std::cout << RED << ex.what() << RESET << std::endl;
			std::cout << YELLOW << "The form " << _name
					  << " is assigned a default grade to sign (" << _gradeToSign << ")."
					  << RESET << std::endl;
		}
		else
			_gradeToSign = gradeToSign;
		if (gradeToExecute > 150 || gradeToExecute < 1)
		{
			_gradeToExecute = 150;
			std::cout << RED << ex.what() << RESET << std::endl;
			std::cout << YELLOW << "The form " << _name
					  << " is assigned a default grade to execute (" << _gradeToExecute << ")."
					  << RESET << std::endl;
		}
		else
			_gradeToExecute = gradeToExecute;
	}
}

Form::~Form() {}

Form::Form(const Form& other) : _name(other._name),
								_isSigned(other._isSigned),
								_gradeToSign(other._gradeToSign),
								_gradeToExecute(other._gradeToExecute) {}

Form&	Form::operator=(const Form& other)
{
	if (this != &other)
	{
		const_cast<std::string&>(this->_name) = other._name;
		this->_isSigned = other._isSigned;
		this->_gradeToSign = other._gradeToSign;
		this->_gradeToExecute = other._gradeToExecute;
	}
	return *this;
}

/****************************** Getters ******************************/

const std::string&	Form::getName() const
{
	return _name;
}

bool				Form::getIsSigned() const
{
	return _isSigned;
}

int					Form::getGradeToSign() const
{
	return _gradeToSign;
}

int					Form::getGradeToExecute() const
{
	return _gradeToExecute;
}

/****************************** Methods ******************************/

void			Form::beSigned(const Bureaucrat& bur)
{
	if (bur.getGrade() <= this->_gradeToSign)
	{
		_isSigned = true;
		std::cout << BLUE << bur.getName() << RESET << " signed ";
		std::cout << YELLOW << _name << RESET << std::endl;
	}
	else
		throw Bureaucrat::GradeTooLowException(std::string(RED + bur.getName() + " can't sign "
												   + this->getName() + " because below grade" + RESET).c_str());
}

std::ostream&	operator<<(std::ostream &out, const Form& other)
{
	std::cout << std::boolalpha;
	out  << setiosflags(std::ios::left) << std::setw(20) << "Form name:" << GREEN
		 << other.getName() << RESET << std::endl;
	out  << setiosflags(std::ios::left) << std::setw(20) <<"Form is singed:"
		 << (other.getIsSigned() ? GREEN : RED) << other.getIsSigned() << RESET << std::endl;
	out  << setiosflags(std::ios::left) << std::setw(20) << "Grade to sign:" << GREEN
		 << other.getGradeToSign() << RESET << std::endl;
	out  << setiosflags(std::ios::left) << std::setw(20) << "Grade to execute:" << GREEN
		 << other.getGradeToExecute() << RESET;
	return out;
}

/****************************** Exceptions ******************************/

Form::GradeTooHighException::GradeTooHighException(const std::string& errMsg) : _errMsg(errMsg) {}

Form::GradeTooHighException::~GradeTooHighException() throw() {}

const char *Form::GradeTooHighException::what() const throw()
{
	return this->_errMsg.c_str();
}

Form::GradeTooLowException::GradeTooLowException(const std::string& errMsg) : _errMsg(errMsg) {}

Form::GradeTooLowException::~GradeTooLowException() throw() {}

const char *Form::GradeTooLowException::what() const throw()
{
	return this->_errMsg.c_str();
}
