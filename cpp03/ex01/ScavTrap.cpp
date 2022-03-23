/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:43:43 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/23 13:46:45 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//************************************************************
//     C O N S T R U C T O  R *** D E S T R U C T O R       //
//************************************************************
    ScavTrap::ScavTrap(void) 
    {
        this->_Name = "";
        this->_Hit_points = 100;
        this->_Energy_points = 50;
        this->_Attack_damage = 20;
        std::cout << "Default ScavTrap constructor called " << std::endl;
        return;
    }
    ScavTrap::~ScavTrap(void)
    {
        std::cout << "ScavTrap destructor called " << std::endl;
        return;
    }
    ScavTrap::ScavTrap(std::string target_name)
    {
        this->_Name = target_name;
        this->_Hit_points = 100;
        this->_Energy_points = 50;
        this->_Attack_damage = 20;
        std::cout << "ScavTrap constructor string called " << std::endl;
        std::cout << "Gamer " << this->_Name << " has ben created" << std::endl;
        return;
    }
    ScavTrap::ScavTrap(ScavTrap const &cpy)
    {
        std::cout << "ScavTrap constructor copy called " << std::endl;
        *this = cpy;
        return;
    }
//************************************************************
//                      f U N C T I O N S                   //
//************************************************************
    void guardGate()
    {
        std::cout << "ScavTrap : Mode Gate Keeper activated ✅ " << std::endl;
        return;
    }
