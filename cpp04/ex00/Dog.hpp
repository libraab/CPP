/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 13:46:41 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/24 15:01:08 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include <iostream>

class Dog : public Animal
{
    public:
        Dog(void);  
        ~Dog(void);  
        
        void makeSound() const;
        
    private:
    
};