/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 17:28:22 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/09 11:43:20 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <cstdlib>

class Zombie
{
    public:
            Zombie(void);
            ~Zombie(void);
            void announce(void) const;
            void nameZombie(std::string name);
    private:
            std::string _name;
};

Zombie  *zombieHorde(int N, std::string name);
Zombie  *nameZombie(std::string name);

void    randomChump(std::string name);
void    eraser(Zombie* z_horde);
