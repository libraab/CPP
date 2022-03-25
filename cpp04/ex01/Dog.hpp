/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 13:46:41 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/25 17:04:17 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : virtual public Animal
{
    public:
        Dog(void);  
        virtual ~Dog(void);  
        
        void makeSound() const;
        
    private:
        Brain *brain;
};