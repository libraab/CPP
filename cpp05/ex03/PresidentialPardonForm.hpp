/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 09:59:48 by abouhlel          #+#    #+#             */
/*   Updated: 2022/04/01 15:22:14 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Form.hpp"
# include <stdexcept>
# include <iostream>
# include <cstdlib>
# include <string>

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(std::string const target);
		PresidentialPardonForm(PresidentialPardonForm const &cpy);
		virtual ~PresidentialPardonForm(void);

		PresidentialPardonForm		&operator = (PresidentialPardonForm const &eq);
		void						execute(Bureaucrat const &executor) const;
		
	private:
		std::string _target;
};
