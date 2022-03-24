/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:06:44 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/24 10:37:04 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//************************************************************
//     C O N S T R U C T O  R *** D E S T R U C T O R       //
//************************************************************
    ClapTrap::ClapTrap(void) : _name(""), _hit_points(10), _energy_points(1), _attack_damage(0)
    {
        std::cout << "Default constructor called " << std::endl;
        return;
    }
    ClapTrap::~ClapTrap(void)
    {
        std::cout << "Default destructor called " << std::endl;
        return;
    }
    ClapTrap::ClapTrap(std::string target_name) : _name(target_name),  _hit_points(10), _energy_points(1), _attack_damage(0)
    {
        std::cout << "Constructor string called " << std::endl;
        std::cout << "Gamer " << this->_name << " has ben created" << std::endl;
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
        if (this->_energy_points == 0)
        {
            std::cout << this->_name << " has no more Energy points ⛔️" << std::endl;
            std::cout << "Attack Failed ❌ " << std::endl;
            return;
        }
        this->_energy_points--;
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
        return;
    }
    void    ClapTrap::takeDamage(unsigned int amount)
    {
        this->_hit_points = this->_hit_points - amount;
        std::cout << "➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖" << std::endl;
        std::cout << "      T A R G E T  💥  H I T" << std::endl;
        std::cout << "➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖" << std::endl;
        std::cout << this->_name << " has lost " << amount << " of Hit points 😥" << std::endl;
        std::cout << this->_name << " has " << this->_hit_points << " Hit points left" << std::endl;
        return;
    }
    void    ClapTrap::beRepaired(unsigned int amount)
    {
        std::cout << "➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖" << std::endl;
        std::cout << "     💊 R E P E R A T I O N 💊" << std::endl;
        std::cout << "➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖" << std::endl;
        if (this->_energy_points == 0)
        {
            std::cout << this->_name << " has no more Energy points ⛔️" << std::endl;
            std::cout << "Healing process Failed ❌ " << std::endl;
            return;
        }
        this->_hit_points = this->_hit_points + amount;
        this->_energy_points--;
        std::cout << this->_name << " is recovering from the attack 🌿" << std::endl;
        std::cout << "This cost 1 Energy points." << std::endl;
        std::cout << this->_name << " has " << this->_energy_points << " Energy points left." << std::endl;
        return;
    }
//************************************************************
ClapTrap    &ClapTrap::operator = (ClapTrap const &op)
{
	if (this != &op)
	{
	 	this->_name			    = op._name;
		this->_hit_points	    = op._hit_points;
		this->_energy_points	= op._energy_points;
		this->_attack_damage	= op._attack_damage;
	}
	return (*this);
}