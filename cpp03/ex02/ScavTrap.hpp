/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:43:31 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/23 15:43:08 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public: 
            ScavTrap(void);
            ~ScavTrap(void);
            ScavTrap(std::string target_name);
            ScavTrap(ScavTrap const &cpy);
            
            void guardGate();
};

