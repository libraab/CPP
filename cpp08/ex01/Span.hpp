/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 10:29:12 by abouhlel          #+#    #+#             */
/*   Updated: 2022/04/15 15:14:50 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <algorithm>
# include <exception>
# include <vector>

class	Span {

public:

	Span(unsigned int max);
	Span(Span const	&src);
	virtual ~Span(void);

	Span	&operator = (Span const &op);

	unsigned int	shortestSpan(void) const;
	unsigned int	longestSpan(void) const;
    
	unsigned int                get_N(void) const;
	std::vector <int> const     &get_v_tab(void) const;

	void	addNumber(int nbr);
	void	adding(std::vector <int> ::iterator begin, std::vector <int> ::iterator end);


private:

	Span(void);

	unsigned int	N;
	std::vector <int>	v_tab;
};

std::ostream	&operator << (std::ostream &stream, Span const &stream_output);