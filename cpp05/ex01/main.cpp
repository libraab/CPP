/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:10:24 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/31 16:18:44 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void test1()
{
	try
	{
		Form	F1("morgage.", 50, 20);
		Bureaucrat loula("Asma", 1);
		loula.signForm(F1);
		std::cout << loula << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}
//----------------------------------------------------------------
void test2()
{
	try
	{
		Form	F2("credit.", 10, 20);
		Bureaucrat dex("Maher", 3);
		dex.signForm(F2);
		std::cout << dex << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}
//----------------------------------------------------------------
void test3()
{
	try
	{
		Form	F1("war decralaration.", 1, 1);
		Bureaucrat hoo("Houssem", 150);
		hoo.signForm(F1);
		std::cout << hoo << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}
//----------------------------------------------------------------

int main(void)
{
	std::cout << "➖➖➖➖➖➖➖➖" << std::endl;
	std::cout << "    TEST 1" << std::endl;
	std::cout << "➖➖➖➖➖➖➖➖" << std::endl;
	test1();
	std::cout << "➖➖➖➖➖➖➖➖" << std::endl;
	std::cout << "    TEST 2" << std::endl;
	std::cout << "➖➖➖➖➖➖➖➖" << std::endl;
	test2();
	std::cout << "➖➖➖➖➖➖➖➖" << std::endl;
	std::cout << "    TEST 3" << std::endl;
	std::cout << "➖➖➖➖➖➖➖➖" << std::endl;
	test3();
	return (0);
}
