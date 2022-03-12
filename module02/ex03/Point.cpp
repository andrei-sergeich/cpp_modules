#include "Point.hpp"

Point::Point() : m_x(0), m_y(0) {};

Point::Point(const float x, const float y) : m_x(x), m_y(y) {};

Point::~Point() {};

Point&	Point::operator = (const Point &other)
{
	if (this == &other)
		return (*this);
	*this = Point(other);
	return (*this);
}

bool	Point::operator==(const Point &other) const
{
	return m_x == other.m_x && m_y == other.m_y;
}

Fixed	Point::getX() const
{
	return m_x;
}

Fixed	Point::getY() const
{
	return m_y;
}

std::ostream&	operator << (std::ostream &out, const Point &other)
{
	out << "m_x: " << other.getX() << " m_y: " << other.getY();
	return out;
}
