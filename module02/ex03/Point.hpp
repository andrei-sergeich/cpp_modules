#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

class Point
{
public:
	Point();
	Point(const float x, const float y);
	~Point();

	Fixed	getX(void) const;
	Fixed	getY(void) const;

	Point&	operator = (const Point &other);
	bool	operator==(const Point &other) const;

private:
	Fixed const	m_x;
	Fixed const	m_y;
};

std::ostream&	operator << (std::ostream &out, const Point &other);

#endif
