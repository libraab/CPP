/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:10:24 by abouhlel          #+#    #+#             */
/*   Updated: 2022/04/01 17:14:47 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"

void test1()
{
	Form *F1 = new PresidentialPardonForm("F1");
	try
	{
		Bureaucrat loola("Asma", 1);
		std::cout << loola << std::endl;
		try
		{
			loola.sign_form(*F1);
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			loola.executeForm(*F1);
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
//----------------------------------------------------------------
void test2()
{
	Form *F2 = new RobotomyRequestForm("F2");
	try
	{
		Bureaucrat dex("Maher", 30);
		std::cout << dex << std::endl;
		try
		{
			dex.sign_form(*F2);
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			dex.executeForm(*F2);
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
//----------------------------------------------------------------
void test3()
{
	Form *F3 = new ShrubberyCreationForm("F3");
	try
	{
		Bureaucrat hoo("Houssem", 145);
		std::cout << hoo << std::endl;
		try
		{
			hoo.sign_form(*F3);
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			hoo.executeForm(*F3);
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	
}
//----------------------------------------------------------------

int main(void)
{
	std::cout << "➖➖➖➖➖➖➖➖" << std::endl;
	std::cout << "    TEST 1" << std::endl;
	std::cout << "➖➖➖➖➖➖➖➖" << std::endl;
	test1();
	std::cout << std::endl;
	std::cout << "➖➖➖➖➖➖➖➖" << std::endl;
	std::cout << "    TEST 2" << std::endl;
	std::cout << "➖➖➖➖➖➖➖➖" << std::endl;
	test2();
	std::cout << std::endl;
	std::cout << "➖➖➖➖➖➖➖➖" << std::endl;
	std::cout << "    TEST 3" << std::endl;
	std::cout << "➖➖➖➖➖➖➖➖" << std::endl;
	test3();
	return (0);
}
