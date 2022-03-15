/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 17:26:10 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/14 17:17:45 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    std::cout << "Creating my horde 🧟‍♀️ 🧟‍♀️ 🧟‍♀️ 🧟‍♀️ 🧟‍♀️" << std::endl;
    std::cout << std::endl;
    Zombie *z_create = zombieHorde(5, "Zombie ");
    if (z_create != NULL)
    {
        std::cout << std::endl;
        std::cout << "Pointing to the first zombie --> " << z_create << std::endl << std::endl;
        eraser(z_create);
        std::cout << std::endl;
        std::cout << "The horde has been killed" << std::endl;
    }
    return (0);
}
