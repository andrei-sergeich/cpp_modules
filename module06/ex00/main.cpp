#include "Converter.hpp"

int	main(int argc, char **argv)
{
	if (argc == 2)
		Converter c(argv[1]);
	else
		std::cout << RED << "You must pass one argument!" << RESET << std::endl;
	return 0;
}
