/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:00:30 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/09 13:51:43 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name)
{
    Zombie *z_horde = new Zombie[N];
    for (int i = 0; i < N;i++)
    {
        std::string x = name;
        z_horde[i].nameZombie(x += std::to_string(i));
        z_horde[i].announce();
    }
    return (z_horde);
}

void    eraser(Zombie *z_horde)
{
    delete [] z_horde;
}