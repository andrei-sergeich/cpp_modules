#include "Converter.hpp"

Converter::Converter(char* str) : _value(str)
{
	converting(str);
}

Converter::~Converter() {}

Converter::Converter(const Converter& other) {
	*this = other;
}

Converter& Converter::operator=(const Converter& other) {
	if (this != &other)
		_value = other._value;
	return *this;
}

void	Converter::getChar(char* str)
{
	char	_toChar;
	try
	{
		if (strlen(str) == 1 && !isprint(str[0]))
		{
			std::cout << "here\n";
			_toChar = *str;;
		}
		else if (str[0] == '.')
			_toChar = static_cast<int>(std::atoi(str));
		else
			_toChar = static_cast<char>(std::stoi(str));
		if (!isprint(_toChar))
			std::cout << "char:\t" << YELLOW << "Non displayable" << RESET << std::endl;
		else
			std::cout << "char:\t" << GREEN << _toChar << RESET << std::endl;
	}
	catch (std::exception& exception)
	{
		std::cout << "char:\t" << RED << "impossible" << RESET << std::endl;
	}
}

void	Converter::getInt(char* str)
{
	int	_toInt;
	try
	{
		if (strlen(str) == 1 && !isdigit(str[0]))
			_toInt = static_cast<int>(str[0]);
		else if (str[0] == '.')
			_toInt = static_cast<int>(std::atoi(str));
		else
			_toInt = static_cast<int>(std::stoi(str));
		std::cout << "int:\t" << GREEN << _toInt << RESET << std::endl;
	}
	catch (std::exception& exception)
	{
		std::cout << "int:\t" << RED << "impossible" << RESET << std::endl;
	}
}

void	Converter::getFloat(char* str)
{
	try
	{
		float	_toFloat = static_cast<float>(std::stof(str));
		std::cout << "float:\t" << GREEN << _toFloat << "f" << RESET << std::endl;
	}
	catch (std::exception &exception)
	{
		std::cout << "float:\t" << RED << "impossible" << RESET << std::endl;
	}
}

void	Converter::getDouble(char* str)
{
	try
	{
		double	_toDouble = static_cast<double>(std::stod(str));
		std::cout << "double:\t" << GREEN << _toDouble << RESET << std::endl;
	}
	catch (std::exception &exception)
	{
		std::cout << "double:\t" << RED << "impossible" << RESET << std::endl;
	}
}

void	Converter::converting(char* str)
{
	std::cout.precision(1);
	std::cout << std::fixed;

	getChar(str);
	getInt(str);
	getFloat(str);
	getDouble(str);
}
