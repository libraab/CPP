/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 17:48:25 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/09 16:03:05 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string newtype)
{
    this->setType(newtype);
}

Weapon::~Weapon(void) {} ;

std::string const   Weapon::getType(void) const
{
    return (this->_type);
}

void    Weapon::setType(std::string newtype)
{
    this->_type = newtype;
}
