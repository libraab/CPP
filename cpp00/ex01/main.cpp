/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 20:35:10 by abouhlel          #+#    #+#             */
/*   Updated: 2022/02/24 21:57:27 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook friends;

	while (1)
	{
		std::string	cmd;
		std::cout << std::endl << "Please enter a command (ADD, SEARCH, EXIT) --> ";
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
		{
			std::string data[5];
			std::cout << std::endl << "Enter first name --> ";
			while (data[0].empty())
				std::getline(std::cin, data[0]);
			std::cout << "Enter last name --> ";
			while (data[1].empty())
				std::getline(std::cin, data[1]);
			std::cout << "Enter nickname --> ";
			while (data[2].empty())
				std::getline(std::cin, data[2]);
			std::cout << "Enter phone number --> ";
			while (data[3].empty())
				std::getline(std::cin, data[3]);
			std::cout << "Enter darkest secret --> ";
			while (data[4].empty())
				std::getline(std::cin, data[4]);
			friends.add_contact(data[0], data[1], data[2], data[3], data[4]);
		}
		else if (cmd == "SEARCH")
		{
			if (friends.print_all() == true)
			{
				int	x;
				std::cout << std::endl << "Who are you looking for ?" << std::endl << std::endl;
				std::cout << "Please enter a number between 1 & " << friends.get_total() << "--> ";
				std::cin >> x;
				friends.print_contact(x);
			}
		}
		else if (cmd == "EXIT")
		{
			std::cout << "Bye hun 😘" << std::endl;
			exit(0);
		}
	}
	return (0);
}
