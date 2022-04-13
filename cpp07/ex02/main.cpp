/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 09:58:04 by abouhlel          #+#    #+#             */
/*   Updated: 2022/04/13 09:58:06 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(int, char**)
{
	std::string bros[] = {"Mohamed", "Houssem", "Maher", "Hosni"};
	Array <std::string> tab(4);
	for (int i = 0; i < 4; i++)
		tab[i] = bros[i];
	std::cout << "Tab size is ---> " << tab.size() << std::endl;
	std::cout << "➖➖➖➖➖➖➖➖➖➖" << std::endl;
	std::cout << "   T_E_S_T_I_N_G" << std::endl;
	std::cout << "➖➖➖➖➖➖➖➖➖➖" << std::endl;
	for (int j = 0; j < 5; j++)
	{
		std::cout << "[" << j << "] --> ";
        	try
		{
			std::cout << tab[j] << std::endl;
		}
        	catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return (0);
}
