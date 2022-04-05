#include "Span.hpp"

Span::Span() : _size(0) {}

Span::Span(unsigned int n) : _size(n) {}

Span::~Span() {}

Span::Span(const Span& other)
{
	_vec = other._vec;
	_size = other._size;
}

Span& Span::operator=(const Span& other)
{
	if (this != &other)
	{
		_vec = other._vec;
		_size = other._size;
	}
	return *this;
}

void	Span::addNumber(int num)
{
	try
	{
		if (_vec.size() == _size)
			throw std::out_of_range("addNumber: value cannot be added (out of range)");
		_vec.push_back(num);
	}
	catch (std::exception & ex)
	{
		std::cout << RED << ex.what() << RESET << std::endl;
	}
}

void Span::addNumber(std::vector<int>::const_iterator bg, std::vector<int>::const_iterator en)
{
	try
	{
		unsigned int dist = std::distance(bg, en);

		if (_vec.size() + dist >= _size)
			throw std::out_of_range("addNumber: range cannot be added (size too small)");
		_vec.insert(_vec.end(), bg, en);
	}
	catch (std::exception & ex)
	{
		std::cout << RED << ex.what() << RESET << std::endl;
	}
}

long	Span::shortestSpan()
{
	try
	{
		if (_vec.size() < 2)
			throw std::out_of_range("shortestSpan: nothing to find");

		std::vector<int>::iterator	cur = _vec.begin();
		std::vector<int>::iterator	nx;
		int							shortest = std::numeric_limits<int>::max();
		int 						check;

		while (cur != _vec.end())
		{
			nx = cur + 1;
			while (nx != _vec.end())
			{
				check = std::abs(*nx - *cur);
				if (check < shortest)
					shortest = check;
				++nx;
			}
			++cur;
		}
		return (shortest);
	}
	catch (std::exception & ex)
	{
		std::cout << RED << ex.what() << RESET << std::endl;
		return (-1); // for Linux
	}
}

long	Span::longestSpan()
{
	try
	{
		if (_vec.size() < 2)
			throw std::out_of_range("longestSpan: nothing to find");

		std::vector<int>::const_iterator min;
		std::vector<int>::const_iterator max;

		max = std::max_element(_vec.begin(), _vec.end());
		min = std::min_element(_vec.begin(), _vec.end());

		return (*max - *min);
	}
	catch (std::exception & ex)
	{
		std::cout << RED << ex.what() << RESET << std::endl;
		return (-1); // for Linux
	}
}

const std::vector<int>&	Span::getArray() const
{
	return _vec;
}

std::ostream&		operator<<(std::ostream& out, const Span& span)
{
	unsigned int	size = span.getArray().size();

	for (unsigned int it = 0; it < size; ++it)
		out << GREEN << span.getArray()[it] << RESET << " ";
	return out;
}
