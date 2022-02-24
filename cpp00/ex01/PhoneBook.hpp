/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:12:03 by abouhlel          #+#    #+#             */
/*   Updated: 2022/02/24 21:02:16 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact.hpp"

class PhoneBook
{
    public:
        PhoneBook(void);
        ~PhoneBook(void);
        
        void add_contact(std::string first_name, std::string last_name,
                    std::string nickname, std::string phone_nbr,
                    std::string secret);
        bool print_all(void);
        bool print_contact(int x);
        int  get_total(void);

    private: 
        Contact _contact[8];
        int     _total;
        int     _index;
};
