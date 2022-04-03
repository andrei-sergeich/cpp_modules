#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void	iter(T* array, int len, void (*fnc)(T&))
{
	for (int i = 0; i < len; ++i)
		fnc(array[i]);
}

template <typename T>
void	printer(T& value)
{
	std::cout << "value = " << value << std::endl;
}

template<typename T>
void	incrementer(T& value)
{
	++value;
}

#endif
