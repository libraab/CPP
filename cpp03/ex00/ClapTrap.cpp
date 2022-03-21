/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:06:44 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/21 16:59:25 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//************************************************************
//     C O N S T R U C T O  R *** D E S T R U C T O R       //
//************************************************************
    ClapTrap::ClapTrap(void)
    {
        std::cout << "Default constructor called " << std::endl;
        return;
    }
    ClapTrap::~ClapTrap(void)
    {
        std::cout << "Destructor called " << std::endl;
        return;
    }
    ClapTrap::ClapTrap(std::string _Name)
    {
        std::cout << "Constructor string called " << std::endl;
        return;
    }
    ClapTrap::ClapTrap(ClapTrap const &cpy)
    {
        std::cout << "Constructor copy called " << std::endl;
        return;
    }
//************************************************************
//                      f U N C T I O N S                   //
//************************************************************
    void    attack(const std::string &target)
    {
        this->_Energy_points--;
    }
    void    takeDamage(unsigned int amount)
    {
        this->_Hit_points--;
    }
    void    beRepaired(unsigned int amount)
    {
        this->_Hit_points++;
        this->_Energy_points--;
    }
//************************************************************