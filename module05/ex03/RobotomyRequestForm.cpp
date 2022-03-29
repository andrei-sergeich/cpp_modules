#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Default RobotomyRequestForm", 72, 45),
												 _target("Default RobotomyRequestForm") {}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : Form("RobotomyRequestForm", 72, 45),
																		  _target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : Form (other), _target(other._target) {}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	if (this != &other)
		this->_target = other._target;
	return *this;
}

const std::string&	RobotomyRequestForm::getTarget() const
{
	return _target;
}

void				RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	Form::execute(executor);
	std::cout << "Makes some drilling noises" << std::endl;
	srand(time(NULL));
	if (rand() % 2) {
		std::cout << CYAN << _target << RESET << " robotomized ";
		std::cout << GREEN << "successful" << RESET << std::endl;
	}
	else {
		std::cout << CYAN << _target << RESET <<" robotomized ";
		std::cout << RED << "failed" << RESET << std::endl;
	}
}

std::ostream&		operator<<(std::ostream& out, RobotomyRequestForm const& form)
{
	out << "This is RobotomyRequestForm and its target is ";
	out << form.getTarget();
	return out;
}
