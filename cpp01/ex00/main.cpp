/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 17:26:10 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/14 17:00:29 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ( void)
{
	std::cout << "➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖" << std::endl;
	std::cout << "Creating the first Zombie, Bryan, on the stack" << std::endl;
	{
		Zombie Z_bryan("Bryan");
		Z_bryan.announce();
	}
	std::cout << "➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖" << std::endl;
	std::cout << "Creating the second Zombie, Thomas, on the heap (using newZombie function)" << std::endl;
	{
    	Zombie *Z_thomas = newZombie("Thomas");
		Z_thomas->announce();
		//delete Z_thomas;
	}
	std::cout << "➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖" << std::endl;
	std::cout << "Creating the third Zombie, Malik, on the stack (using randomChump function)" << std::endl;
	randomChump("Malik");
	std::cout << "➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖" << std::endl;
	return (0);
}
