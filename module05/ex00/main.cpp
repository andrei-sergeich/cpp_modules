#include "Bureaucrat.hpp"

int	main()
{
	{
		try
		{
			Bureaucrat Senator("Senator", 150);
			std::cout << Senator << "\n";
			Senator.gradeDown();
			Senator.gradeDown();
			Senator.gradeDown();
			std::cout << Senator << "\n";
		}
		catch (const Bureaucrat::GradeTooHighException &ex)
		{
			std::cerr << GREEN << "We here!" << RESET << std::endl;
			std::cerr << RED << ex.what() << RESET << std::endl;
		}
		catch (const Bureaucrat::GradeTooLowException &ex)
		{
			std::cerr << GREEN << "We here!" << RESET << std::endl;
			std::cerr << RED << ex.what() << RESET << std::endl;
		}
		catch (...)
		{
			std::cerr << GREEN << "We here!" << RESET << std::endl;
			std::cerr << "Something strange happened" << std::endl;
		}
	}
	std::cout << std::endl;

	Bureaucrat tooHigh("tooHigh", 0);
	tooHigh.gradeDown();
	tooHigh.gradeDown();
	tooHigh.gradeDown();
	std::cout << tooHigh << "\n";
	std::cout << std::endl;

	Bureaucrat bureaucrat_1("John B.", 1);
	Bureaucrat bureaucrat_2("Bill C.", 150);
	Bureaucrat bureaucrat_3 (bureaucrat_2);
	bureaucrat_1 = bureaucrat_2;

	std::cout << bureaucrat_1 << std::endl;
	std::cout << bureaucrat_2 << std::endl;
	std::cout << bureaucrat_3 << std::endl;
	std::cout << std::endl;

	Bureaucrat def;
	std::cout << def << std::endl;
	def.gradeUp();
	def.gradeUp();
	std::cout << def << std::endl;

	return 0;
}
