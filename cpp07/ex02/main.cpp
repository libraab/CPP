/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 09:58:04 by abouhlel          #+#    #+#             */
/*   Updated: 2022/04/14 10:09:07 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <string>

using namespace std;

int main(int, char**)
{
	//----------------MAIN----(1)-------------------
	std::string bros[] = {"Mohamed", "Houssem", "Maher", "Hosni"};
	Array <std::string> tab(4);
	for (int i = 0; i < 4; i++)
		tab[i] = bros[i];
	std::cout << "Tab size is ---> " << tab.get_size() << std::endl;
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

	//----------------MAIN----(2)-------------------
	/*Array<string> tab(10);
	string test = "A";
	for (int i = 0; i < 10; i++)
	{
		tab[i] = test;
		test += test;
	}

	Array<string> tab2;

	tab2 = tab;

	for (int i = 0; i < 10; i++)
		tab2[i] = "zut";
	
	for (int i = 0; i < 10; i++)
		cout << tab[i] << endl;

	for (int i = 0; i < 10; i++)
		cout << tab2[i] << endl;

	tab2 = tab;

	for (int i = 0; i < 10; i++)
		tab2[i] = "zut";
	
	for (int i = 0; i < 10; i++)
		cout << tab[i] << endl;

	for (int i = 0; i < 10; i++)
		cout << tab2[i] << endl;
	*/
	return (0);
}
