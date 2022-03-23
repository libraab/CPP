/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:06:44 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/23 11:26:31 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//************************************************************
//     C O N S T R U C T O  R *** D E S T R U C T O R       //
//************************************************************
    ClapTrap::ClapTrap(void) : _Name(""), _Hit_points(10), _Energy_points(1), _Attack_damage(0)
    {
        std::cout << "Default constructor called " << std::endl;
        return;
    }
    ClapTrap::~ClapTrap(void)
    {
        std::cout << "Destructor called " << std::endl;
        return;
    }
    ClapTrap::ClapTrap(std::string target_name) : _Name(target_name),  _Hit_points(10), _Energy_points(1), _Attack_damage(0)
    {
        std::cout << "Constructor string called " << std::endl;
        std::cout << "Gamer " << this->_Name << " has ben created" << std::endl;
        return;
    }
    ClapTrap::ClapTrap(ClapTrap const &cpy)
    {
        std::cout << "Constructor copy called " << std::endl;
        *this = cpy;
        return;
    }
//************************************************************
//                      f U N C T I O N S                   //
//************************************************************
    void    ClapTrap::attack(std::string const &target)
    {
        std::cout << "➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖" << std::endl;
        std::cout << "         🤜🏻 A T T A C K 🤛🏻   " << std::endl;
        std::cout << "➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖" << std::endl;
        if (this->_Energy_points == 0)
        {
            std::cout << this->_Name << " has no more Energy points ⛔️" << std::endl;
            std::cout << "Attack Failed ❌ " << std::endl;
            return;
        }
        this->_Energy_points--;
        std::cout << "ClapTrap " << this->_Name << " attacks " << target << ", causing " << this->_Attack_damage << " points of damage!" << std::endl;
        return;
    }
    void    ClapTrap::takeDamage(unsigned int amount)
    {
        this->_Hit_points = this->_Hit_points - amount;
        std::cout << "➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖" << std::endl;
        std::cout << "      T A R G E T  💥  H I T" << std::endl;
        std::cout << "➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖" << std::endl;
        std::cout << this->_Name << " has lost " << amount << " of Hit points 😥" << std::endl;
        std::cout << this->_Name << " has " << this->_Hit_points << " Hit points left" << std::endl;
        return;
    }
    void    ClapTrap::beRepaired(unsigned int amount)
    {
        std::cout << "➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖" << std::endl;
        std::cout << "     💊 R E P E R A T I O N 💊" << std::endl;
        std::cout << "➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖" << std::endl;
        if (this->_Energy_points == 0)
        {
            std::cout << this->_Name << " has no more Energy points ⛔️" << std::endl;
            std::cout << "Healing process Failed ❌ " << std::endl;
            return;
        }
        this->_Hit_points = this->_Hit_points + amount;
        this->_Energy_points--;
        std::cout << this->_Name << " is recovering from the attack 🌿" << std::endl;
        std::cout << "This cost 1 Energy points." << std::endl;
        std::cout << this->_Name << " has " << this->_Energy_points << " Energy points left." << std::endl;
        return;
    }
//************************************************************
ClapTrap    &ClapTrap::operator = (ClapTrap const &op)
{
	if (this != &op)
	{
	 	this->_Name			    = op._Name;
		this->_Hit_points	    = op._Hit_points;
		this->_Energy_points	= op._Energy_points;
		this->_Attack_damage	= op._Attack_damage;
	}
	return (*this);
}