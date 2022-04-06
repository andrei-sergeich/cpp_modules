#include "MutantStack.hpp"

int main(int, char**)
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << "-------" << std::endl;

	std::stack<int> s(mstack);
	std::cout << s.top() << std::endl;

	std::cout << "-------" << std::endl;

	MutantStack<int>::reverse_iterator s_rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator s_rite = mstack.rend();
	++s_rit;
	--s_rit;
	while (s_rit != s_rite)
	{
		std::cout << *s_rit << std::endl;
		++s_rit;
	}

	return 0;
}
