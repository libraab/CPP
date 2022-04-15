/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 10:29:08 by abouhlel          #+#    #+#             */
/*   Updated: 2022/04/15 12:39:07 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

//************************************************************
//     C O N S T R U C T O  R *** D E S T R U C T O R       //
//************************************************************
	Span::Span(void): N(0) {}
	Span::Span(unsigned int x): N(x) {}
	Span::Span(Span const &cpy): N(0) {*this = cpy;}
	Span::~Span(void) {}

//************************************************************
// 		                 G E T T E R     	    	         //
//************************************************************
unsigned int	Span::get_N(void) const
{
	return this->N;
}

std::vector<int> const	&Span::get_v_tab(void) const
{
	return this->v_tab;
}

//************************************************************
//                      f U N C T I O N S                   //
//************************************************************
unsigned int	Span::shortestSpan(void) const
{
	if (this->v_tab.size() > 1)
	{
		std::vector <int>	tmp = this->v_tab;
		sort(tmp.begin(), tmp.end());
		
		unsigned int		y = *(tmp.begin() + 1) - *tmp.begin();
		if (y == 0)
			return (y);
		
		unsigned int		x = 0;
		for (std::vector <int> ::iterator i = tmp.begin() + 1; i != (tmp.end() - 1); i++)
		{
			x = *(i + 1) - *i;
			if (x < y)
				y = x;
		}
		return (y);
	}
	else
		throw std::logic_error("❌  No span can be found");
}

unsigned int	Span::longestSpan(void) const
{
	if (this->v_tab.size() > 1)
		return (*std::max_element(this->v_tab.begin(), this->v_tab.end()) - *std::min_element(this->v_tab.begin(), this->v_tab.end()));
	else
		throw std::logic_error("❌  No span can be found");
}

void	Span::addNumber(int nbr)
{
	if (this->v_tab.size() == this->N)
		throw std::out_of_range(" ⛔️ You have reached the limit; The span is Full");
	else
		this->v_tab.push_back(nbr);
}

void	Span::adding(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	std::vector <int>	tmp(begin, end);
	
	if (this->N >= tmp.size() + this->v_tab.size())
		this->v_tab.insert(this->v_tab.end(), begin, end); 
	else
		throw std::range_error("❌ Not enough place ❌ ");
}

//*****************************************************************************
// 		                     O P E R A T O R S                   			//
//*****************************************************************************
Span	&Span::operator=(Span const &op)
{
	if (&op != this)
	{
		this->N = op.get_N();
		this->v_tab = op.get_v_tab();
	}
	return *this;
}

std::ostream	&operator<<(std::ostream &stream, Span const &stream_output)
{
	std::vector<int>	tmp = stream_output.get_v_tab();
	stream << "Tab ---> ";
	for (std::vector <int>::iterator it = tmp.begin(); it != tmp.end(); it++)
		stream << "[" << *it << "] ";
	return (stream);
}