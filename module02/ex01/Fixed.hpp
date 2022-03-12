#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
#include <string>

class Fixed
{
public:
	Fixed();
	Fixed(const int num);
	Fixed(const float num);
	Fixed(const Fixed &other);
	~Fixed();

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	Fixed&			operator = (const Fixed &other);

private:
	int					m_value;
	static const int	m_fracBitsNum;
};

std::ostream&	operator << (std::ostream &out, const Fixed &other);

#endif
