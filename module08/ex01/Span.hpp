#ifndef SPAN_HPP
# define SPAN_HPP

# include "colors.hpp"
# include <iostream>
# include <vector>
# include <algorithm>
# include <limits>
# include <numeric>

class Span
{
private:
	std::vector<int>	_vec;
	unsigned int		_size;
	Span();

public:
	Span(unsigned int n);
	~Span();
	Span(const Span& other);
	Span&	operator=(const Span& other);

	void	addNumber(int num);
	void	addNumber(std::vector<int>::const_iterator bg, std::vector<int>::const_iterator en);

	long	shortestSpan();
	long	longestSpan();

	const std::vector<int>&		getArray() const;
};

std::ostream& operator<<(std::ostream& out, const Span& span);

#endif
