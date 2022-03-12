#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
#include <string>

class Fixed
{
public:
	// Default constructor
	Fixed();
	// Overload constructors
	Fixed(const int num);
	Fixed(const float num);
	// Copy constructor
	Fixed(const Fixed &other);
	// Destructor
	~Fixed();

	// Methods
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	float	toFloat(void) const;
	int		toInt(void) const;

	static Fixed&		max(Fixed &a, Fixed &b);
	static Fixed&		min(Fixed &a, Fixed &b);
	static const Fixed&	max(const Fixed &a, const Fixed &b);
	static const Fixed&	min(const Fixed &a, const Fixed &b);

	// Operators overloading
	Fixed&	operator = (const Fixed &other);

	bool	operator > (const Fixed &other) const;
	bool	operator < (const Fixed &other) const;
	bool	operator >= (const Fixed &other) const;
	bool	operator <= (const Fixed &other) const;
	bool	operator == (const Fixed &other) const;
	bool	operator != (const Fixed &other) const;

	Fixed	operator + (const Fixed &other) const;
	Fixed	operator - (const Fixed &other) const;
	Fixed	operator * (const Fixed &other) const;
	Fixed	operator / (const Fixed &other) const;

	Fixed&	operator ++ (void);
	Fixed&	operator -- (void);
	Fixed	operator ++ (int);
	Fixed	operator -- (int);


private:
	int					m_value;
	static const int	m_fracBitsNum;
};

// Operator '<<' overloading
std::ostream&	operator << (std::ostream &out, const Fixed &other);

#endif
