#include "templates.hpp"
#include <iostream>

int main( void )
{
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::cout << "--------------------------------------" << std::endl;

	Awesome a1(2);
	Awesome b1(3);
	::swap(a1 , b1);
	std::cout << "a1 = " << a1 << ", b1 = " << b1 << std::endl;
	std::cout << "man( a1, b1 ) = " << ::max( a1, b1 ) << std::endl;
	std::cout << "mix( a1, b1 ) = " << ::min( a1, b1 ) << std::endl;

	return 0;
}