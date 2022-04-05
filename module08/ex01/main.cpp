#include "Span.hpp"

int main(int, char**)
{
	Span sp = Span(20);

	sp.addNumber(6);
	sp.addNumber(3);
//	sp.addNumber(10);
//	sp.addNumber(-11);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	sp.addNumber(5);
	std::cout << "sp: " << sp << std::endl;

	std::vector<int>	vec;
	for (int i = 0; i < 5; i++)
		vec.push_back(i);
	sp.addNumber(vec.begin(), vec.end());
	std::cout << "sp: " << sp << std::endl;

//	std::vector<int>::const_iterator bg = sp.getArray().begin();
//	bg += 22548;
//	std::cout << "sp [22548]: " << *bg << std::endl;
//	std::cout << "sp [22548]: " << sp.getArray().at(22548) << std::endl;


//	std::vector<int>	v(2,8);
//	std::vector<int>	vv(3, 5);
//	vv=v;
//	std::vector<int>::iterator it = vv.begin();
//	for (it; it != vv.end(); ++it)
//		std::cout << *it << std::endl;
//	std::cout << vv[0] << std::endl;

	return 0;
}
