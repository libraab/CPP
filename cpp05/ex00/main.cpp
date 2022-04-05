/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:10:24 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/31 16:18:30 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void test1()
{
	try
	{
		Bureaucrat loula("Asma", 1);
		loula.upgrade();
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
		Bureaucrat dex("Maher", 3);
		dex.upgrade();
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
		Bureaucrat hoo("Houssem", 150);
		hoo.downgrade();
		std::cout << hoo << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}
//----------------------------------------------------------------
void test4()
{
	try
	{
		Bureaucrat mimo("Mohamed", 100);
		mimo.downgrade();
		std::cout << mimo << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}
//----------------------------------------------------------------
void test5()
{
	try
	{
		Bureaucrat hosni("Hosny", 0);
		hosni.upgrade();
		std::cout << hosni << std::endl;
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
	std::cout << "➖➖➖➖➖➖➖➖" << std::endl;
	std::cout << "    TEST 4" << std::endl;
	std::cout << "➖➖➖➖➖➖➖➖" << std::endl;
	test4();
	std::cout << "➖➖➖➖➖➖➖➖" << std::endl;
	std::cout << "    TEST 5" << std::endl;
	std::cout << "➖➖➖➖➖➖➖➖" << std::endl;
	test5();
	
	return (0);
}
