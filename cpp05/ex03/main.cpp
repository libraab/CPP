/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:10:24 by abouhlel          #+#    #+#             */
/*   Updated: 2022/04/05 11:06:31 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

void test1()
{
	Intern	Mohamed;
	Form *F1;
	try
	{
		F1 = Mohamed.makeForm("presidential pardon", "Asma");
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
//----------------------------------------------------------------
void test2()
{
	Intern	Houssem;
	Form *F2;
	try
	{
		F2 = Houssem.makeForm("shrubbery creation", "Asma");
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
//----------------------------------------------------------------
void test3()
{
	Intern	Maher;
	Form *F3;
	try
	{
		F3 = Maher.makeForm("robotomy request", "Asma");
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
//----------------------------------------------------------------
void test4()
{
	Intern	Hosni;
	Form *F5;
	try
	{
		F5 = Hosni.makeForm("blablabla", "Asma");
	}
	catch (std::exception &e)
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
	std::cout << std::endl;
	std::cout << "➖➖➖➖➖➖➖➖" << std::endl;
	std::cout << "    TEST 4" << std::endl;
	std::cout << "➖➖➖➖➖➖➖➖" << std::endl;
	test4();
	return (0);
}
