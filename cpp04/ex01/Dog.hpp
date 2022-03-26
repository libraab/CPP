/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 13:46:41 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/26 09:51:39 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public Animal
{
    public:
        Dog(void); 
        virtual ~Dog(void);  
        Dog(const Dog &cpy); 
        
        void makeSound() const;
        Dog    &operator = (const Dog &eq);
        
    private:
        Brain brain;
};

