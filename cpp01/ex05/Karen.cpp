/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:17:53 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/10 15:46:17 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void) {} ;
Karen::~Karen(void) {} ;

//************************************************************************************************************************
    void    Karen::_debug(void)
    {
        std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do ! 😏" << std::endl;
        return;
    }
//************************************************************************************************************************
    void    Karen::_info(void)
    {
        std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more ! 😠" << std::endl;
        return;
    }
//************************************************************************************************************************
    void    Karen::_warning(void)
    {
        std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month. 😤" << std::endl;
        return;
    }
//************************************************************************************************************************
    void    Karen::_error(void)
    {
        std::cout << "This is unacceptable ! I want to speak to the manager now. 😡" << std::endl;
        return;
    }
//************************************************************************************************************************
    void    Karen::complain(std::string level)
    {
        std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
        
        int x = 0;
        for(int i = 0; i < 4; i++)
        {
            if (level.compare(levels[i]) == 0)
                x = i + 1 ;
        }
        switch (x)
        {
            case 1: _debug();      break;
            case 2: _info();       break;
            case 3: _warning();    break;
            case 4: _error();      break;
            case 0:
                std::cout << "Wrong level" << std::endl;
                break;
        }
    }
