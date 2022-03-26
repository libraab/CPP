/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 13:01:30 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/25 16:03:40 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

//************************************************************
//      C O N S T R U C T O R *** D E S T R U C T O R       //
//************************************************************
    Brain::Brain(void) : _ideas(new std::string[100])
    {
        std::cout << "Brain constructor called 🧠" << std::endl;
        return;
    }
    Brain::~Brain(void)
    {
        delete [] this->_ideas;
        std::cout << "Brain destructor called 🤯" << std::endl;
        return;
    }
    Brain::Brain(const Brain &cpy) : _ideas(new std::string[100])
    {
        std::cout << "Brain copy constructor called 🧠 --> 🧠" << std::endl;
        *this = cpy;
        return; 
    }
//************************************************************
//                      F U N C T I O N                     //
//************************************************************
    std::string     *Brain::get_ideas(void) const
    {
        return (this->_ideas);
    }
//************************************************************
//                      O P E R A T O R                     //
//************************************************************
    Brain    &Brain::operator = (Brain const &op)
    {
        std::cout << "Brain copy assignment operator called" << std::endl;
        for (int i = 0; i < 100; i++)
            this->_ideas[i] = op.get_ideas()[i];
        return *this;
    }