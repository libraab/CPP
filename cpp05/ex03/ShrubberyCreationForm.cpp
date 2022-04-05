/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 09:58:27 by abouhlel          #+#    #+#             */
/*   Updated: 2022/04/01 17:07:54 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

//*****************************************************************************
//     			 C O N S T R U C T O R *** D E S T R U C T O R   		     //
//*****************************************************************************
    ShrubberyCreationForm::ShrubberyCreationForm(std::string const name): Form("ShrubberyCreationForm", 145, 137)
    {
        this->_target = name;
        return ;
    }
    ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &cpy): Form("ShrubberyCreationForm", 145, 137)
    {
        *this = cpy;
        return ;
    }
    ShrubberyCreationForm::~ShrubberyCreationForm(void)
    {
        return ;
    }

//*****************************************************************************
// 		                     F U N C T I O N                    			 //
//*****************************************************************************
    void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
    {
        if (executor.get_bureaucrat_grade() > this->get_form_executing_grade())
            throw Form::GradeTooLowException();
        else
        {
            std::string file_name = executor.get_bureaucrat_name() + "_shrubbery";
            std::ofstream ofs(file_name);
            ofs << "__________ZZZZZZ " << std::endl;
            ofs << "_______ZZZZZZZZZ___________ZZZZ " << std::endl;
            ofs << "______ZZZZZZZZZZZ________ZZZZZZ " << std::endl;
            ofs << "______ZZZZZZZZZZZZ_____ZZZZZZZZZZ " << std::endl;
            ofs << "_________ZZZZZZZZZ____ZZZZZZZZZZZ " << std::endl;
            ofs << "__ZZZZZZ___ZZZZZZZZ__ZZZZZZZZZZZZ " << std::endl;
            ofs << "_ZZZZZZZZZ_ZZZZZZZZ_ZZZZZZZZZZZZZZ " << std::endl;
            ofs << "_ZZZZZZZZZZZZZZ___ZZZZZZZZZZZZZZZZ " << std::endl;
            ofs << "_ZZZZZZZZZZZZZZZZZZZZZZZ " << std::endl;
            ofs << "ZZZZZZZZZZZZZZZZZZZZZZZZZZ " << std::endl;
            ofs << "ZZZZZZ___ZZZZ___ZZZZZZZZZZZ " << std::endl;
            ofs << "______ZZZZZZZZZZ_ZZZZZZZZZZZ " << std::endl;
            ofs << "____ZZZZZZZZZZZ__ZZZZZZZZZZZZ " << std::endl;
            ofs << "__ZZZZZZZZZZ_||||ZZZZZ_ZZZZZZZ " << std::endl;
            ofs << "_ZZZZZZZZZ__||||ZZZZZZ_ZZZZZZZZ " << std::endl;
            ofs << "__ZZZZZZZ__|||||ZZZZZZ_ZZZZZZZZZ " << std::endl;
            ofs << "___ZZZZZ__|||||ZZZZZZZ_ZZZZZZZZZZ " << std::endl;
            ofs << "__________|||||ZZZZZZZ_ZZZZZZZZZZ " << std::endl;
            ofs << "_________|||||ZZZZZZZZ_ZZZZZZZZZZZ " << std::endl;
            ofs << "________|||||ZZZZZZZZ___ZZZZZZZZZ " << std::endl;
            ofs << "_______|||||ZZZZZZZZ " << std::endl;
            ofs << "______|||||| " << std::endl;
            ofs << "______|||||| " << std::endl;
            ofs << "_____||||||| " << std::endl;
            ofs << "_____||||||| " << std::endl;
            ofs << "____||||||| " << std::endl;
            ofs << "____||||||| " << std::endl;
            ofs << "____||||||| " << std::endl;
            ofs << "____|||||| " << std::endl;
            ofs << "___|||||| " << std::endl;
            ofs << "___|||||| " << std::endl;
            ofs << "__||||||| " << std::endl;
            ofs << "__||||||| " << std::endl;
            ofs << "__|||||| " << std::endl;
            ofs << "__|||||| " << std::endl;
            ofs << "__|||||| " << std::endl;
            ofs << "___|||| " << std::endl;
            ofs.close();
        }
        return ;
    }

//*****************************************************************************
// 		                     O P E R A T O R S                   			 //
//*****************************************************************************
    ShrubberyCreationForm & ShrubberyCreationForm::operator = (ShrubberyCreationForm const &eq)
    {
        if (this != &eq)
            this->_target = eq._target;
        return (*this);
    }