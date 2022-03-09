/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 17:26:10 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/09 12:01:31 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    std::cout << " Creating my horde " << std::endl;
    Zombie* z_create = zombieHorde(5, "z_name");
    std::cout << "Pointing to --> " << z_create << std::endl;
    eraser(z_create);
}
