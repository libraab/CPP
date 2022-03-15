/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:39:38 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/09 16:08:59 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <cstdlib>
#include "Weapon.hpp"

class HumanB
{
    public:
        HumanB(std::string name);
        ~HumanB(void);
        void    attack(void);
        void    setWeapon(Weapon &weapon);
        
    private:
        std::string     _name;
        Weapon          *_weapon;
};