#include "Fixed.hpp"

const int	Fixed::m_fracBitsNum(8);

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	m_value = 0;
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	m_value = num << m_fracBitsNum;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
//	m_value = static_cast<int>(num * pow(2,m_fracBitsNum));
//	m_value = static_cast<float>(num * (1 << m_fracBitsNum));
//	this->m_value = roundf(num * (1 << m_fracBitsNum));
//	this->m_value = ((float)num) * (1 << m_fracBitsNum);
//	this->m_value = floor((num * pow(2,m_fracBitsNum)) + 0.5);
	this->m_value = floorf((num * (1 << m_fracBitsNum)) + 0.5);

}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
//	this->m_value = other.m_value;
//	m_value = other.getRawBits();
	*this = other;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator = (const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
//	this->m_value = other.m_value;
	m_value = other.getRawBits();
	return *this;
}

std::ostream&	operator << (std::ostream &out, const Fixed &other)
{
	out << other.toFloat();
	return out;
}

int	Fixed::getRawBits(void) const
{
//	std::cout << "getRawBits member function called" << std::endl;
	return m_value;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	m_value = raw;
}

float	Fixed::toFloat(void) const
{
//	return (float)m_value/ (1 << m_fracBitsNum);
	return static_cast<float> ((m_value) / pow(2,m_fracBitsNum));
}

int	Fixed::toInt(void) const
{
	return m_value >> m_fracBitsNum;;
}