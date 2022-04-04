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

class Awesome {
	int	i;
public:
	Awesome(void) : i(42) {return;}
	int get(void) const {
		return this->i;
	};
};

std::ostream & operator<<(std::ostream &o, Awesome const &rhs) {
	o << rhs.get(); return o;};

template <typename T>
void	print (T & x)
{
	std::cout << x << std::endl;
	return;
}

#endif
