/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 09:58:15 by abouhlel          #+#    #+#             */
/*   Updated: 2022/04/13 09:58:16 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	test1(int x)
{
	int a[10];
	int i;
	for(i = 0; x > 0; i++)    
	{     
		a[i] = x % 2;    
		x = x/2;  
	}
	for(i = i - 1; i >= 0; i--)    
	{    
		std::cout << a[i];    
	}
	std::cout << std::endl;  
}
void	test2(float x)
{
	x *= 3;
	std::cout << x << "f" << std::endl;
}
void	test3(std::string str)
{
	std::reverse(str.begin(), str.end());
	std::cout << str  << std::endl;
}

int main(void)
{
	int     	i_tab[] = {1, 2, 3};
	float   	f_tab[] = {1.111f, 2.222f, 3.333f, 4.444f, 5.555f};
	std::string	s_tab[] = {"demahoM", "messuoH", "rehaM", "insoH"};
	//-----------------------------------------------
	std::cout << "➖➖➖➖➖➖➖➖➖➖" << std::endl;
	std::cout << "     T_E_S_T  (1) " << std::endl;
	std::cout << "➖➖➖➖➖➖➖➖➖➖" << std::endl;
	iter(i_tab, 3, &test1);
	//------------------------------------------------
	std::cout << "➖➖➖➖➖➖➖➖➖➖" << std::endl;
	std::cout << "     T_E_S_T  (2) " << std::endl;
	std::cout << "➖➖➖➖➖➖➖➖➖➖" << std::endl;
	iter(f_tab, 5, &test2);
	//------------------------------------------------
	std::cout << "➖➖➖➖➖➖➖➖➖➖" << std::endl;
	std::cout << "     T_E_S_T  (3) " << std::endl;
	std::cout << "➖➖➖➖➖➖➖➖➖➖" << std::endl;
	iter(s_tab, 4, &test3);

	return (0);
}
