/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:10:48 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/28 10:59:13 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include <stdexcept>

class Bureaucrat
{
    public:
        Bureaucrat(void);
        ~Bureaucrat(void);
        Bureaucrat(std::string name, int const grade);
        
        std::string const getName();
        int getGrade() const;
        
        //void    GradeTooHighException();
        //void    GradeTooLowException();
        
    private:
        std::string const      _name;
        int const grade; // 1 is the highest and 150 is le the lowest
};