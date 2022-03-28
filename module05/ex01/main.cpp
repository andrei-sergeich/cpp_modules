#include "Bureaucrat.hpp"

int	main()
{
	std::cout << std::boolalpha;

	Form	blanc("blanc", 500, 100);

	Form	blanc1("blanc1", 100, 100);
	std::cout << blanc1 << std::endl;

	Bureaucrat	bureaucrat1("Alex", 150);
	Bureaucrat	bureaucrat2("John", 1);
	Bureaucrat	bureaucrat3("Bob", 75);

	bureaucrat1.signForm(blanc1);
	std::cout << std::endl << blanc1 << std::endl;

	bureaucrat2.signForm(blanc1);
	std::cout << std::endl << blanc1 << std::endl;

	bureaucrat3.signForm(blanc1);
	std::cout << std::endl << blanc1 << std::endl;

	return 0;
}
