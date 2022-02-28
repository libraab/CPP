/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 17:28:19 by abouhlel          #+#    #+#             */
/*   Updated: 2022/02/26 15:12:33 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::zombie(void) {}
Zombie::~zombie(void) {}

void Zombie::announce(void)
{
    std::cout << Zombie::_name << "BraiiiiiiinnnzzzZ..." << std::endl;
}