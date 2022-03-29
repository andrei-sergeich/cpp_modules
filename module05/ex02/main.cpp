#include "Bureaucrat.hpp"
//#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	Bureaucrat	bureaucrat1("Alex", 150);
	Bureaucrat	bureaucrat2("John", 75);
	Bureaucrat	bureaucrat3("Bob", 1);

//	ShrubberyCreationForm	shrubberyCreationFrom("ShrubberyCreationFrom");
	RobotomyRequestForm		robotomyRequestForm("RobotomyRequestForm");
	PresidentialPardonForm	presidentialPardonForm("PresidentialPardonForm");

//	bureaucrat1.signForm(shrubberyCreationFrom);
	bureaucrat1.signForm(robotomyRequestForm);
	bureaucrat1.signForm(presidentialPardonForm);
//	bureaucrat1.executeForm(shrubberyCreationFrom);
	bureaucrat1.executeForm(robotomyRequestForm);
	bureaucrat1.executeForm(presidentialPardonForm);
	std::cout << "------------------------------------------------------------";
	std::cout << "--------------------" << std::endl;

//	bureaucrat2.signForm(shrubberyCreationFrom);
	bureaucrat2.signForm(robotomyRequestForm);
	bureaucrat2.signForm(presidentialPardonForm);
//	bureaucrat2.executeForm(shrubberyCreationFrom);
	bureaucrat2.executeForm(robotomyRequestForm);
	bureaucrat2.executeForm(presidentialPardonForm);
	std::cout << "------------------------------------------------------------";
	std::cout << "--------------------" << std::endl;

//	bureaucrat3.signForm(shrubberyCreationFrom);
	bureaucrat3.signForm(robotomyRequestForm);
	bureaucrat3.signForm(presidentialPardonForm);
//	bureaucrat3.executeForm(shrubberyCreationFrom);
	bureaucrat3.executeForm(robotomyRequestForm);
	bureaucrat3.executeForm(presidentialPardonForm);
	std::cout << "------------------------------------------------------------";
	std::cout << "--------------------" << std::endl;

	return 0;
}
