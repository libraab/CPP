#include "Span.hpp"

Span::Span(void): N(0) {}
Span::Span(unsigned int x): N(x) {}
Span::Span(Span const &cpy) {*this = cpy;}
Span::~Span()
//--------------------------------------------------------
void	Span::addNumber(unsigned int const x)
{
	
}
//--------------------------------------------------------
unsigned int	Span::longestSpan(void)
{
}
//--------------------------------------------------------
unsigned int	Span::shortestSpan(void)
{
}
//--------------------------------------------------------
//                   O P E R A T O R                    //
//--------------------------------------------------------
Span    &Span::operator = (Span const &op)
{
	return (*this);
}