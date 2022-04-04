#include "easyfind.hpp"

template<typename T>
void	easyfind(T& cont, int to_find)
{
	typename T::iterator it = std::find(cont.begin(), cont.end(), to_find);
	try
	{
		if (it == cont.end())
			throw std::exception();
		std::cout << "Found - " << YELLOW << *it << RESET << "! It's was easy)" << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout << RED << "Not found" << RESET << std::endl;
	}
}
