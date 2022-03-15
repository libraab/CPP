/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:00:30 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/14 17:12:32 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name)
{
    if (N >= 0)
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
    else
    {
        std::cout << "ERROR ! Wrong argument" << std::endl;
        return (NULL);
    }
}

void    eraser(Zombie *z_horde)
{
    delete [] z_horde;
}