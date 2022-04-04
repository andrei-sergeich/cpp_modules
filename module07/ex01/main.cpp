#include <iostream>
#include "iter.hpp"
#define SIZE 5



int main( void )
{
	int		i[SIZE] = {2, 5, 9, 8, 1};
	char	c[SIZE] = {'a', 'b', 'c', 'd', 'e'};
	float	f[SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5};

	::iter(i, SIZE, ::printer);
	std::cout << "-----------------" << std::endl;
	::iter(c, SIZE, ::printer);
	std::cout << "-----------------" << std::endl;
	::iter(f, SIZE, ::printer);

	std::cout << "+++++++++++++++++\n";
	std::cout << "+++++++++++++++++";

	::iter(i, SIZE, ::incrementer);
	::iter(c, SIZE, ::incrementer);
	::iter(f, SIZE, ::incrementer);
	std::cout << std::endl;

	::iter(i, SIZE, ::printer);
	std::cout << "-----------------" << std::endl;
	::iter(c, SIZE, ::printer);
	std::cout << "-----------------" << std::endl;
	::iter(f, SIZE, ::printer);
	std::cout << "*****************" << std::endl;
	std::cout << std::endl;

	std::string arrayStr[] = {"templates", "are", "cool"};
	::iter(arrayStr, 3, ::printer);
	std::cout << "-----------------" << std::endl;
	Awesome arr[SIZE];
	::iter(arr, SIZE, ::printer);
	::iter(arr, SIZE, ::print);

	return 0;
}
