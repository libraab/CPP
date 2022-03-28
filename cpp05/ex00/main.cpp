/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:10:24 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/28 11:30:02 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void test1() 
{
	try
	{
		//do something here
		if(/* error*/)
		{
			throw std::exception();
		}
		else
		{
			//do something here
		}
	}
	catch (std::exception e)
	{
		//handling the error
	}
}
void test2()
{
	//do something here 
	if (/* error*/)
	{
		throw std::exception();
	}
	else
	{
		//do something here
	}
}

void test3()
{
	try
	{
		test2();
	}
	catch(std::exception& e)
	{
		//handling error here 
	}
	
}

void test4()
{
	class PEBKACException : public std::Exception
	{
		public:
			virtual const char * whate() const throw()
	}
}

void test5()
{
	try
	{
		Bureaucrat sean(1, "Sean Paul");
		sean.upGrade();
		std::cout << sean << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

int main(void)
{
	test1();
	test2();
	test3();
	test4();
	test5();
	return (0);
}
