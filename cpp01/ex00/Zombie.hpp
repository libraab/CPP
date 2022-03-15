/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 17:28:22 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/03 16:36:14 by abouhlel         ###   ########.fr       */
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
            Zombie(std::string str);
            ~Zombie(void);
            void announce(void) const;
            
    private:
            std::string _name;
};

Zombie 	*newZombie(std::string name );
void 	randomChump(std::string name );
