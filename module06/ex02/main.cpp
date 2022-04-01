#include <iostream>
#include <cstdlib>
#include <exception>
//#include <typeinfo>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	generate(void)
{
	srand(time(NULL));
	int choice = rand() % 3 + 1;

	switch (choice)
	{
		case 1: return new A;
		case 2: return new B;
		case 3: return new C;
	}
	return NULL;
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << 'A' << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << 'B' << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << 'C' << std::endl;
}

void	identify(Base& p)
{
	try
	{
		(void) dynamic_cast<A&>(p);
		std::cout << 'A' << std::endl;
	}
	catch (std::exception& ex) {}

	try
	{
		(void) dynamic_cast<B&>(p);
		std::cout << 'B' << std::endl;
	}
	catch (std::exception& ex) {}

	try
	{
		(void) dynamic_cast<C&>(p);
		std::cout << 'C' << std::endl;
	}
	catch (std::exception& ex) {}
}

int	main()
{
	Base *base = generate();

	identify(base);
	identify(*base);

	delete base;

	return 0;
}
