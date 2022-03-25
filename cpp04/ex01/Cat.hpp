/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 13:44:43 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/25 17:04:10 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : virtual public Animal
{
    public:
        Cat(void);  
        virtual ~Cat(void);  
        
        void makeSound() const;

    private:
        Brain *brain;
};