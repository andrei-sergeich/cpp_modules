#include "easyfind.hpp"

int main(int, char**)
{
	std::vector<int> vec;
	for (int i = 0; i < 10; ++i)
		vec.push_back(i);
	for (int value : vec)
		std::cout << value << ' ';
	std::cout << std::endl;
	easyfind(vec, 5);
	easyfind(vec, 20);

	std::cout << std::endl;

	std::list<int> ls;
	for (int i = 0; i < 10; ++i)
		ls.push_back(i);
	for (int value : vec)
		std::cout << value << ' ';
	std::cout << std::endl;
	easyfind(ls, 5);
	easyfind(ls, 20);

	return 0;
}
