/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:06:53 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/24 10:22:32 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
    // ClapTrap gamer1("Asma");
    // ClapTrap gamer2("Zac");
    // gamer1.attack("Zac");
    // gamer2.takeDamage(1);
    // gamer2.beRepaired(1);
    // gamer2.beRepaired(1);
    // gamer1.attack("Soukaina");
    ScavTrap robot1("Bryan");
    ScavTrap robot2("Malik");
    robot1.attack("Malik");
    robot2.takeDamage(1);
    robot2.beRepaired(1);
    robot2.guardGate();
    
    return (0);
}
