#pragma once

#include <iostream>
#include <vector>

class Span
{
    public:
        Span(unsigned int N);
        Span(Span const &cpy);
        Span(void);
        ~Span(void);

        Span &operator = (Span const &op);
        void    addNumber(unsigned int const x);
        unsigned int    shortestSpan(void) const;
        unsigned int    longestSpan(void) const;
        //-----------------------------------------
        class full_span: public std::exception
		{
			const char * what() const throw();
		};
        //-----------------------------------------
		class unvalid_distance: public std::exception
		{
			const char * what() const throw();
		};
        //-----------------------------------------

    private:
        unsigned int const  N;
	    std::vector <int>	v_tab;
        Span(void);
};