/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 13:46:21 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/26 09:53:56 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//************************************************************
//      C O N S T R U C T O R *** D E S T R U C T O R       //
//************************************************************
Cat::Cat(void)
{
    std::cout << "Cat default constructor called 🐱" << std::endl;
    this->type = "Cat";
    return;
}
Cat::~Cat(void)
{
    std::cout << "Cat destructor called " << std::endl;
    std::cout <<  "---------------------------" << std::endl;
    return;
}
Cat::Cat(const Cat &cpy)
{
    std::cout << "Cat constructor Copy called " << std::endl;
    std::cout <<  "---------------------------" << std::endl;
    *this = cpy;
    return;
}
//************************************************************
//                      F U N C T I O N                     //
//************************************************************
void Cat::makeSound() const
{
    std::cout << "🗯 Meowwwww 🗯 " << std::endl;
    return;
}
//************************************************************
//                      O P E R A T O R                     //
//************************************************************
Cat    &Cat::operator = (Cat const &eq)
{
    std::cout << "Cat copy assignment operator called" << std::endl;
    this->brain = eq.brain;
    return *this;
}
