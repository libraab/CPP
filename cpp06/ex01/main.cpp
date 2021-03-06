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
	std::string str;
	int	    x;
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



	Data		*data			= new Data;
	uintptr_t	seralize_test		= 0;
	Data		*deseralize_test	= NULL;

	data->str = "Hello World";
	data->x = 42;

	std::cout << "➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖" << std::endl;
	std::cout << "Seralization & Deseralization test with Structure" << std::endl;
	std::cout << "➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖" << std::endl;
	seralize_test = serialize(data);
	deseralize_test = deserialize(seralize_test);

	std::cout << "Unintptr_ t: " << seralize_test << std::endl;
	std::cout << "str --> ";
	if (!deseralize_test->str.compare(data->str))
		std::cout << "Same value ✅" << std::endl;
	else
		 std::cout << "Different value ⛔️" << std::endl;
	std::cout << "x --> ";
	if (deseralize_test->x == data->x)
		std::cout << "Same value ✅" << std::endl;
	else
		std::cout << "Differnt value ⛔️" << std::endl;

	delete data;
	return (0);
}
