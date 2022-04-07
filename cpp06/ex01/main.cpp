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
	std::string x;
	std::string y;
	int	    z;;
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
	Data *data	= new Data;
	data->x 	= "Hello";
	data->y		= "World";
	data->z 	= 42;

	uintptr_t save	= serialize(data);
	Data *data_cpy	= deserialize(save);

	std::cout << "uintptr_t: " << save << std::endl;
	
	std::cout << data_cpy->x;
	if (data_cpy->x.compare(data->x) == 0)
		std::cout << " ✅" << std::endl;
	else
		std::cout << " ❌" << std::endl;
	
	std::cout << data_cpy->y;
	if (data_cpy->y.compare(data->y) == 0)
		std::cout << " ✅" << std::endl;
	else
		std::cout << " ❌" << std::endl;
	
	std::cout << data_cpy->z;
	if (data_cpy->z == data->z)
		std::cout << "✅" << std::endl;
	else
		std::cout << "❌" << std::endl;
	
	return (0);
}
