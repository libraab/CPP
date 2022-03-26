/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 12:31:01 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/25 12:42:49 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

//************************************************************
//      C O N S T R U C T O R *** D E S T R U C T O R       //
//************************************************************
    WrongAnimal::WrongAnimal(void)
    {
        std::cout << "⛔️ WrongAnimal constructor called" << std::endl;
        return;
    };
    WrongAnimal::~WrongAnimal(void)
    {
        std::cout << "⛔️ WrongAnimal destructor called" << std::endl;
        return;
    };
//************************************************************
//                      F U N C T I O N                     //
//************************************************************
    void WrongAnimal::makeSound() const
    {
        std::cout << "❌ Wrong sound 🗯 " << std::endl;
        return;
    }