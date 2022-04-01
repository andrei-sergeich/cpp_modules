#include <iostream>
#include <stdint.h>
#include "colors.hpp"

struct Data
{
	int		i;
	float	f;
	char	c;
};

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*		deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int	main(int argc, char **argv)
{
	Data		*data_1 = new Data;
	Data		*data_2 = data_1;
	uintptr_t	ptr;

	data_1->i = 42;
	data_1->f = 3.33f;
	data_1->c = 'c';

	std::cout << "address of data_1: " << data_1 << std::endl;
	std::cout << "values of data_1: i = " << data_1->i << " f = " << data_1->f << " c = " << data_1->c << std::endl;
	std::cout << "value of ptr = " << ptr << std::endl;
	std::cout << "address of ptr " << &ptr  << std::endl;
	std::cout << "address of data_2: " << data_2 << std::endl;
	std::cout << "values of data_2: i = " << data_2->i << " f = " << data_2->f << " c = " << data_2->c << std::endl;

	std::cout << "------------------------------------------------------------"
			  << "--------------------" << std::endl;

	ptr = serialize(data_1);
	std::cout << "value of ptr = " << ptr << std::endl;
	std::cout << "address of ptr " << &ptr  << std::endl;

	std::cout << "------------------------------------------------------------"
			  << "--------------------" << std::endl;

	data_2 = deserialize(ptr);
	std::cout << "address of data_2: " << data_2 << std::endl;
	std::cout << "values of data_2: i = " << data_2->i << " f = " << data_2->f << " c = " << data_2->c << std::endl;

	delete data_1;

	return 0;
}
