/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 12:16:12 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/26 09:42:19 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Animal
{
    public:
        Animal(void);
        virtual ~Animal(void) = 0;
        
        virtual void        makeSound() const;
        std::string const   getType() const;
    
    protected:
        std::string type;
};