#include <iostream>

int	main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string		*stringPTR = &str;
	std::string		&stringREF = str;

	std::cout << "&str\t\t- " << &str << '\n'
			  << "stringPTR\t- " << stringPTR << '\n'
			  << "&stringREF\t- " << &stringREF << std::endl;

	std::cout << "str\t\t\t- " << str << '\n'
			  << "*stringPTR\t- " << *stringPTR << '\n'
			  << "stringREF\t- " << stringREF << std::endl;

	return 0;
}
