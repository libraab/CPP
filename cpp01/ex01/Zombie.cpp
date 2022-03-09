/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 17:28:19 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/09 12:53:33 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {} ;

Zombie::~Zombie(void)
{
    std::cout << this->_name << " has been 💀 eliminated 🔪" << std::endl;
    return ;
}

void    Zombie::announce(void)
{
    std::cout << this->_name << "BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}

Zombie* newZombie(std::string name)
{
    Zombie *newZombie = new Zombie;
    newZombie->nameZombie(name);
    return (newZombie);
}

void    randomChump(std::string name)
{
    Zombie* randomChump = newZombie(name);
    randomChump->announce();
    delete randomChump;
}