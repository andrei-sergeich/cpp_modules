#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <cstdlib>

template <typename T>
class Array
{
private:
	T				*_data;
	unsigned int	_size;

public:
	Array();
	virtual ~Array();
	Array(unsigned int n);

	Array(const Array& other);
	Array&	operator=(const Array& other);
	T&	operator[](unsigned int index);

	unsigned int	size() const;

};

# include "Array.tpp"

template<typename T>
std::ostream& operator<<(std::ostream& out, const Array<T>& data);

#endif
