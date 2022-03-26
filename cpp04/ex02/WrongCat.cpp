/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 12:31:41 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/25 12:45:12 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

//************************************************************
//      C O N S T R U C T O R *** D E S T R U C T O R       //
//************************************************************
    WrongCat::WrongCat(void)
    {
        std::cout << "⛔️ WrongCat constructor called" << std::endl;
        return;
    };
    WrongCat::~WrongCat(void)
    {
        std::cout << "⛔️ WrongCat destructor called" << std::endl;
        return;
    };