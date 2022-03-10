#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
public:
	Fixed();
	Fixed(const Fixed &other);
	Fixed&	operator = (const Fixed &other);
	~Fixed();

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

private:
	int					m_value;
	static const int	m_fracBitsNum;
};

#endif
