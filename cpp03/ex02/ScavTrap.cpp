/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:43:43 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/24 10:17:37 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//************************************************************
//     C O N S T R U C T O  R *** D E S T R U C T O R       //
//************************************************************
    ScavTrap::ScavTrap(void) 
    {
        this->_name = "";
        this->_hit_points = 100;
        this->_energy_points = 50;
        this->_attack_damage = 20;
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
        this->_name = target_name;
        this->_hit_points = 100;
        this->_energy_points = 50;
        this->_attack_damage = 20;
        std::cout << "ScavTrap constructor string called " << std::endl;
        std::cout << "Gamer " << this->_name << " has ben created" << std::endl;
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
    void ScavTrap::guardGate()
    {
        std::cout << "ScavTrap" << this->_name << " Mode Gate Keeper activated ✅ " << std::endl;
        return;
    }
