/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 13:47:36 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/24 15:01:17 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//************************************************************
//      C O N S T R U C T O R *** D E S T R U C T O R       //
//************************************************************
Dog::Dog(void)
{
    std::cout << "Dog constructor called 🐶" << std::endl;
    this->type = "Dog";
    return;
}
Dog::~Dog(void)
{
    std::cout << "Dog destructor called" << std::endl;
    return;
}
//************************************************************
//                      F U N C T I O N                     //
//************************************************************
void Dog::makeSound() const
{
    std::cout << "Woafff 🗯 " << std::endl;
    return;
}