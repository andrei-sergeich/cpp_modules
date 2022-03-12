#include "Fixed.hpp"

const int	Fixed::m_fracBitsNum(8);

//* Default constructor
Fixed::Fixed()
{
	m_value = 0;
}

// Overload constructors
Fixed::Fixed(const int num)
{
//	m_value = num * pow(2,m_fracBitsNum);
	m_value = num << m_fracBitsNum;
}

Fixed::Fixed(const float num)
{
//	this->m_value = roundf(num * (1 << m_fracBitsNum));
	m_value = floorf((num * (1 << m_fracBitsNum)) + 0.5);
}

// Copy constructor
Fixed::Fixed(const Fixed &other)
{
//	this->m_value = other.m_value;
//	m_value = other.getRawBits();
	*this = other;
}

// Destructor
Fixed::~Fixed() {};

// Methods
int	Fixed::getRawBits(void) const
{
	return m_value;
}

void	Fixed::setRawBits(int const raw)
{
	m_value = raw;
}

float	Fixed::toFloat(void) const
{
	return static_cast<float> ((m_value) / pow(2,m_fracBitsNum));
}

int	Fixed::toInt(void) const
{
	return m_value >> m_fracBitsNum;;
}

Fixed&	Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

Fixed&	Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

const Fixed&	Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b ? a : b);
}

const Fixed&	Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b ? a : b);
}

// Operators overloading
Fixed&	Fixed::operator = (const Fixed &other)
{
	m_value = other.getRawBits();
	return *this;
}

bool	Fixed::operator > (const Fixed &other) const
{
	return this->m_value > other.m_value;
//	return this->toFloat() > other.toFloat();
}

bool	Fixed::operator < (const Fixed &other) const
{
	return this->m_value < other.m_value;
//	return this->toFloat() < other.toFloat();
}

bool	Fixed::operator >= (const Fixed &other) const
{
	return this->m_value >= other.m_value;
//	return this->toFloat() >= other.toFloat();
}

bool	Fixed::operator <= (const Fixed &other) const
{
	return this->m_value <= other.m_value;
//	return this->toFloat() <= other.toFloat();
}

bool	Fixed::operator == (const Fixed &other) const
{
	return this->m_value == other.m_value;
//	return this->toFloat() == other.toFloat();
}

bool	Fixed::operator != (const Fixed &other) const
{
	return this->m_value != other.m_value;
//	return this->toFloat() != other.toFloat();
}

Fixed	Fixed::operator + (const Fixed &other) const
{
	Fixed	tmp;

	tmp.setRawBits(this->getRawBits() + other.getRawBits());
	return tmp;
}

Fixed	Fixed::operator - (const Fixed &other) const
{
	Fixed	tmp;

	tmp.setRawBits(this->getRawBits() - other.getRawBits());
	return tmp;
}

Fixed	Fixed::operator * (const Fixed &other) const
{
	Fixed	tmp;
	tmp.setRawBits(this->getRawBits() * other.getRawBits() / (1 << m_fracBitsNum));
	return tmp;
}

Fixed	Fixed::operator / (const Fixed &other) const
{
	Fixed	tmp;
	tmp.setRawBits((this->toFloat() / other.toFloat()) * (1 << m_fracBitsNum));
	return tmp;
}

Fixed&	Fixed::operator ++ (void)
{
	++m_value;
	return *this;
}

Fixed&	Fixed::operator -- (void)
{
	--m_value;
	return *this;
}

Fixed	Fixed::operator ++ (int)
{
	Fixed	tmp(*this);

	++(*this);
	return tmp;
}

Fixed	Fixed::operator -- (int)
{
	Fixed	tmp(*this);

	--(*this);
	return tmp;
}

// Operator '<<' overloading
std::ostream&	operator << (std::ostream &out, const Fixed &other)
{
	out << other.toFloat();
	return out;
}
