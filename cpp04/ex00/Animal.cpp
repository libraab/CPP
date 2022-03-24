/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 12:53:50 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/24 15:01:02 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//************************************************************
//      C O N S T R U C T O R *** D E S T R U C T O R       //
//************************************************************
Animal::Animal(void)
{
    std::cout << "Animal constructor called" << std::endl;
    this->type = "Unspecified";
    return;
}
Animal::~Animal(void)
{
    std::cout << "Animal destructor called" << std::endl;
    return;
}
//************************************************************
//                      F U N C T I O N                     //
//************************************************************
void Animal::makeSound() const
{
    std::cout << "Animal sound 🗯 " << std::endl;
    return;
}