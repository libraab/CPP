/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:10:48 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/28 12:22:56 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include <stdexcept>

class Bureaucrat
{
    public:
        Bureaucrat(std::string name, int const grade);
        ~Bureaucrat(void);
        Bureaucrat(Bureaucrat const &cpy);
        
        Bureaucrat    &Bureaucrat::operator = (Bureaucrat const &eq);
        
        std::string         getName(void) const;
        int                 getGrade();
        void                upgrade();
        void                downgrade();
        
        class GradeTooHighException: public std::exception
        {
            public: 
                const char * what() const throw ();
        };

        class GradeTooLowException: public std::exception
        {
            public: 
                const char * what() const throw ();
        };
        
    private:
        std::string const      _name;
        int _grade; // 1 is the highest and 150 is le the lowest
};

std::ostream &operator <<(std::ostream &stream, const Bureaucrat &stream_output)