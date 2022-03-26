/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 13:44:43 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/26 09:51:36 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public Animal
{
    public:
        Cat(void); 
        virtual ~Cat(void);
        Cat(const Cat &cpy); 
        
        void makeSound() const;
        Cat    &operator = (const Cat &eq);

    private:
        Brain brain;
};
