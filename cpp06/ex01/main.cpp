/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 14:40:56 by abouhlel          #+#    #+#             */
/*   Updated: 2022/04/07 14:48:21 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <stdint.h>

struct Data
{
	std::string title;
	std::string description;
	int 		price;
};

uintptr_t serialize(Data* ptr)
{
	uintptr_t x = reinterpret_cast <uintptr_t> (ptr);
	return (x);
}

Data* deserialize(uintptr_t raw)
{
	Data* y = reinterpret_cast <Data *> (raw);
	return (y);
}

int main(void)
{
	Data * 		announce = new Data;
	Data * 		announce_save;
	uintptr_t 	save;

	announce->title 	= "I'm title";
	announce->description 	= "I'm description";
	announce->price 	= 50;
	
	save 			= serialize(announce);
	announce_save 		= deserialize(save);

	std::cout << "uintptr_t: " << save << std::endl;
	std::cout << announce_save->title;
	(!announce_save->title.compare(announce->title)) ?
		std::cout << " ✅" << std::endl :
		std::cout << " ❌" << std::endl;
	std::cout << announce_save->description;
	(!announce_save->description.compare(announce->description)) ?
		std::cout << " ✅" << std::endl :
		std::cout << " ❌" << std::endl;
	std::cout << announce_save->price;
	(announce_save->price == announce->price) ?
		std::cout << "$ ✅" << std::endl :
		std::cout << "$ ❌" << std::endl;
	return (0);
}
