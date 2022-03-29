#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{
private:
	std::string		_target;
	ShrubberyCreationForm();

public:
	ShrubberyCreationForm(const std::string& target);
	virtual ~ShrubberyCreationForm();

	ShrubberyCreationForm(const ShrubberyCreationForm &other);
	ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& other);

	const std::string&		getTarget() const;
	virtual void			execute(const Bureaucrat &executor) const;
};

std::ostream& operator<<(std::ostream& out, ShrubberyCreationForm const& form);

#endif
