#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Default PresidentialPardonForm", 25, 5),
												 _target("Default PresidentialPardonForm") {}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : Form("PresidentialPardonForm", 25, 5),
																		  _target(target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : Form (other), _target(other._target) {}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	if (this != &other)
		this->_target = other._target;
	return *this;
}

const std::string&	PresidentialPardonForm::getTarget() const
{
	return _target;
}

void				PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	Form::execute(executor);
	std::cout << CYAN << _target << RESET << " has been pardoned by "
			  PINK << "Zafod Beeblerbox" << RESET << std::endl;
}

std::ostream&		operator<<(std::ostream& out, PresidentialPardonForm const& form)
{
	out << "This is PresidentialPardonForm and its target is ";
	out << form.getTarget();
	return out;
}
