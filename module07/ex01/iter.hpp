#ifndef ITER_HPP
# define ITER_HPP

template <typename T>
void	iter(T* array, int len, void (*fnc)(T&))
{
	for (int i = 0; i < len; ++i)
		fnc(array[i]);
}

template <typename T>
void	printer(T& value)
{
//	std::cout << "a[" << i << "] = " << a[i] << std::endl;
	std::cout << "value = " << value << std::endl;
}

template<typename T>
void	incrementer(T& value)
{
	++value;
}

#endif
