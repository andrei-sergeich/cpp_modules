#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <cstdlib>

class RobotomyRequestForm : public Form
{
private:
	std::string		_target;
	RobotomyRequestForm();

public:
	RobotomyRequestForm(const std::string& target);
	virtual ~RobotomyRequestForm();

	RobotomyRequestForm(const RobotomyRequestForm &other);
	RobotomyRequestForm&	operator=(const RobotomyRequestForm& other);

	const std::string&		getTarget() const;
	virtual void			execute(const Bureaucrat &executor) const;
};

std::ostream& operator<<(std::ostream& out, RobotomyRequestForm const& form);

#endif
