#include "Fixed.hpp"

const int	Fixed::m_fracBitsNum(8);

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	m_value = 0;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
//	this->m_value = other.m_value;
//	m_value = other.getRawBits();
	*this = other;
}

Fixed&	Fixed::operator = (const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
//	this->m_value = other.m_value;
	m_value = other.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return m_value;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	m_value = raw;
}
