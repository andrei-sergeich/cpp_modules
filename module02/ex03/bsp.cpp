#include "Point.hpp"

bool bsp(Point const A, Point const B, Point const C, Point const point)
{
	Fixed a = (A.getX() - point.getX()) * (B.getY() - A.getY()) - (B.getX() - A.getX()) * (A.getY() - point.getY());
	Fixed b = (B.getX() - point.getX()) * (C.getY() - B.getY()) - (C.getX() - B.getX()) * (B.getY() - point.getY());
	Fixed c = (C.getX() - point.getX()) * (A.getY() - C.getY()) - (A.getX() - C.getX()) * (C.getY() - point.getY());

	return ((a >= 0 && b >= 0 && c >= 0) || (a <= 0 && b <= 0 && c <= 0));
}