/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:06:50 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/23 13:49:19 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class ClapTrap
{
    public:
		ClapTrap(void);
		~ClapTrap(void);
		ClapTrap(std::string target_name);
		ClapTrap(ClapTrap const &cpy);

		void            attack(const std::string &target);
		void            takeDamage(unsigned int amount);
		void            beRepaired(unsigned int amount);
		
		ClapTrap        &operator = (ClapTrap const& eq);
		
    protected:
		std::string     _Name;
		int             _Hit_points;
		int             _Energy_points;
		int             _Attack_damage;
};

std::ostream &operator <<(std::ostream &stream, const ClapTrap &stream_output);
