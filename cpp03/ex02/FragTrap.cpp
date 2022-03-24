/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 09:11:05 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/24 10:36:48 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

//************************************************************
//     C O N S T R U C T O  R *** D E S T R U C T O R       //
//************************************************************
    FragTrap::FragTrap(void) 
    {
        this->_name = "";
        this->_hit_points = 100;
        this->_energy_points = 100;
        this->_attack_damage = 30;
        std::cout << "FragTrap constructor called " << std::endl;
        return;
    }
    FragTrap::~FragTrap(void)
    {
        std::cout << "FragTrap destructor called " << std::endl;
        return;
    }
    FragTrap::FragTrap(std::string target_name)
    {
        this->_name = target_name;
        this->_hit_points = 100;
        this->_energy_points = 50;
        this->_attack_damage = 20;
        std::cout << "FragTrap constructor string called " << std::endl;
        std::cout << "Gamer " << this->_name << " has ben created" << std::endl;
        return;
    }
    FragTrap::FragTrap(FragTrap const &cpy)
    {
        std::cout << "FragTrap constructor copy called " << std::endl;
        *this = cpy;
        return;
    }
//************************************************************
//                      f U N C T I O N S                   //
//************************************************************
    void FragTrap::highFivesGuys(void)
    {
        std::cout << "FragTrap" << this->_name << " ✋🏻 is high fiving you 🤚🏻 " << std::endl;
        return;
    }