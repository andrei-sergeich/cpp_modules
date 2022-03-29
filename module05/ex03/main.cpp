#include "Bureaucrat.hpp"
#include "Intern.hpp"

int	main()
{
	Bureaucrat	bureaucrat("Ministr", 1);
	Intern		someRandomIntern;
	Form		*form;

	std::cout << "------------------------------------------------------------"
			  << "--------------------" << std::endl;
	try
	{
		form = someRandomIntern.makeForm("PresidentialPardonForm", "Thief");
		form->beSigned(bureaucrat);
		bureaucrat.executeForm(*form);
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::cout;
	}
	std::cout << "------------------------------------------------------------"
			  << "--------------------" << std::endl;

	try
	{
		form = someRandomIntern.makeForm("SomeWrongForm", "Thief");
		form->beSigned(bureaucrat);
		bureaucrat.executeForm(*form);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "------------------------------------------------------------";
	std::cout << "--------------------" << std::endl;

	delete form;
	return 0;
}
