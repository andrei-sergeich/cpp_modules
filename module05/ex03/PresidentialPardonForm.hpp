#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string		_target;
	PresidentialPardonForm();

public:
	PresidentialPardonForm(const std::string& target);
	virtual ~PresidentialPardonForm();

	PresidentialPardonForm(const PresidentialPardonForm &other);
	PresidentialPardonForm&	operator=(const PresidentialPardonForm& other);

	const std::string&		getTarget() const;
	virtual void			execute(const Bureaucrat &executor) const;
};

std::ostream& operator<<(std::ostream& out, PresidentialPardonForm const& form);

#endif
