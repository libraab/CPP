/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 13:47:36 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/26 09:53:42 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//************************************************************
//      C O N S T R U C T O R *** D E S T R U C T O R       //
//************************************************************
Dog::Dog(void)
{
    std::cout << "Dog default constructor called 🐶" << std::endl;
    this->type = "Dog";
    return;
}
Dog::~Dog(void)
{
    std::cout << "Dog destructor called " << std::endl;
    std::cout <<  "---------------------------" << std::endl;
    return;
}
Dog::Dog(const Dog &cpy)
{
    std::cout << "Dog constructor copy called " << std::endl;
    std::cout <<  "---------------------------" << std::endl;
    *this = cpy;
    return;
}
//************************************************************
//                      F U N C T I O N                     //
//************************************************************
void Dog::makeSound() const
{
    std::cout << "🗯 Woafff Woaff 🗯 " << std::endl;
    return;
}
//************************************************************
//                      O P E R A T O R                     //
//************************************************************
Dog    &Dog::operator = (Dog const &eq)
{
    std::cout << "Dog copy assignment operator called" << std::endl;
    this->brain = eq.brain;
    return *this;
}