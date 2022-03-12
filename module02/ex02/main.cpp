#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const c(Fixed( 5.05f ) / Fixed( 2 ) );
	Fixed d(5.04f);
	Fixed e(5.05f);

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << "b is " << b << std::endl;
	std::cout << "b is " << b.toInt() << " as int" << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "c is " << c.toInt() << " as int" << std::endl;
	std::cout << (d == e) << std::endl;
	std::cout << --d << std::endl;
	std::cout << Fixed( 5.05f ) << std::endl;
	std::cout << Fixed( 2 ) << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << Fixed::min( d, e ) << std::endl;

	return 0;
}
