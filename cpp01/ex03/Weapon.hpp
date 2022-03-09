/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 17:49:29 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/09 16:13:36 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <cstdlib>


class Weapon
{
    public:
        Weapon(std::string newtype);
        ~Weapon(void);
        
        std::string const   getType(void) const;
        void                setType(std::string newtype);
        
    private:
        std::string _type;
};
