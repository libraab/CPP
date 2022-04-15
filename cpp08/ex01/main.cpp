/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 10:29:01 by abouhlel          #+#    #+#             */
/*   Updated: 2022/04/15 12:35:10 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	ft_generate(void)
{
    int x = std::rand() % 100;
    return (x);
}
void    test1(void)
{
    Span bros = Span(4);

	bros.addNumber(4);
	bros.addNumber(2);
	bros.addNumber(7);
	bros.addNumber(11);

	std::cout << bros.shortestSpan() << std::endl;
	std::cout << bros.longestSpan() << std::endl;
}
void   test2(void)
{
	Span	            tab(10);
	std::vector <int>	v_tab(10);
    
	generate(v_tab.begin(), v_tab.end(), ft_generate);
	tab.adding(v_tab.begin(), v_tab.end());
    
	std::cout << tab << std::endl;
	std::cout << "Shortest ---> "  << tab.shortestSpan() << std::endl;
	std::cout << "Longest ---> " << tab.longestSpan() << std::endl;
}
void    test3(void)
{
	Span	            tab(20000);
	std::vector <int>	v_tab(20000);

	generate(v_tab.begin(), v_tab.end(), ft_generate);
	tab.adding(v_tab.begin(), v_tab.end());

	std::cout << "Shortest ---> " << tab.shortestSpan() << std::endl;
	std::cout << "Longest ---> " << tab.longestSpan() << std::endl;
}
int	main(void)
{
    std::cout << "➖➖➖➖➖➖" << std::endl;
    std::cout << "  TEST (1)" << std::endl;
    std::cout << "➖➖➖➖➖➖" << std::endl;
    test1();
	std::cout << std::endl;
    std::cout << "➖➖➖➖➖➖" << std::endl;
    std::cout << "  TEST (2)" << std::endl;
    std::cout << "➖➖➖➖➖➖" << std::endl;
    test2();
	std::cout << std::endl;
    std::cout << "➖➖➖➖➖➖" << std::endl;
    std::cout << "  TEST (3)" << std::endl;
    std::cout << "➖➖➖➖➖➖" << std::endl;
    test3();
	
	return (0);
}