/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:06:53 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/22 14:50:58 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
    ClapTrap gamer1("Asma");
    ClapTrap gamer2("Soukaina");
    
    gamer1.attack("Soukaina");
    //gamer2.takeDamage(1);
    gamer2.beRepaired(1);
    return (0);
}
