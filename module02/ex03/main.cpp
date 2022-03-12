#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const P);

int	main(void)
{
	Point	A(1, 5);
	Point	B(3, 8);
	Point	C(5, 3);
	Point	P1(4, 4);
	Point	P2(3, 5);

	std::cout << "A:\t\t" << A << std::endl;
	std::cout << "B:\t\t" << B << std::endl;
	std::cout << "C:\t\t" << C << std::endl;
	std::cout << "Point1:\t\t" << P1 << std::endl;
	std::cout << "Point2:\t\t" << P2 << std::endl;

	if (bsp(A, B, C, P1))
		std::cout << "The point is inside of the triangle" << std::endl;
	else
		std::cout << "The point is not inside of the triangle" << std::endl;

	return 0;
}
