/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 17:26:10 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/09 13:01:06 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    std::cout << " Creating my horde " << std::endl;
    Zombie* z_create = zombieHorde(5, "Horde");
    std::cout << "Pointing to --> " << z_create << std::endl;
    eraser(z_create);
    std::cout << " The horde has been killed" << std::endl;
    return (0);
}
