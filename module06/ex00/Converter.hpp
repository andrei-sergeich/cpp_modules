#ifndef CONVERTER_HPP
#define CONVERTER_HPP

# include <iostream>
# include <iomanip>
# include <cstring>
# include <cstdlib>
# include <exception>
# include "colors.hpp"

class Converter
{
private:
	char*	_value;
//	char	_toChar;
//	int		_toInt;
//	float	_toFloat;
//	double	_toDouble;

	void	converting(char* str);

public:
	Converter(char* str);
	~Converter();
	Converter(const Converter& other);
	Converter&	operator=(const Converter& other);

	void	getChar(char* str);
	void	getInt(char* str);
	void	getFloat(char* str);
	void	getDouble(char* str);
};

#endif
