/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:43:43 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/24 10:32:23 by abouhlel         ###   ########.fr       */
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
        std::cout << "Robot " << this->_name << " has ben created" << std::endl;
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
        std::cout << "ScavTrap " << this->_name << " Mode Gate Keeper activated ✅ " << std::endl;
        return;
    }
    void    ScavTrap::attack(std::string const &target)
    {
        std::cout << "➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖" << std::endl;
        std::cout << "         🤜🏻 A T T A C K 🤛🏻   " << std::endl;
        std::cout << "➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖" << std::endl;
        if (this->_energy_points == 0)
        {
            std::cout << this->_name << " has no more Energy points ⛔️" << std::endl;
            std::cout << "Attack Failed ❌ " << std::endl;
            return;
        }
        this->_energy_points--;
        std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
        return;
    }
