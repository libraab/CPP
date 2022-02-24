/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 19:54:28 by abouhlel          #+#    #+#             */
/*   Updated: 2022/02/24 21:30:17 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    _total = 0;
    _index = 0;
}
PhoneBook::~PhoneBook(void) {}

void PhoneBook::add_contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_nbr, std::string secret)
{
    if (_index == 8)
		_index = 0;
    _contact[_index].ft_stock_first_name(first_name);
    _contact[_index].ft_stock_last_name(last_name);
    _contact[_index].ft_stock_nickname(nickname);
    _contact[_index].ft_stock_phone_nbr(phone_nbr);
    _contact[_index].ft_stock_secret(secret);
	_index++;
	if (_total != 8)
    	_total++;                
}

bool PhoneBook::print_all(void)
{
    if (_total == 0)
    {
        std::cout << std::endl << "You have no contact 😢 " << std::endl;
        return (false);
    }
    std::cout << "_____________________________________________" << std::endl;
    std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    for (int i = 0; i < _total; i++)
    {
        std::cout << "|         " << i + 1 << "|";
        if (_contact[i].ft_get_first_name().length() < 10)
            std::cout << std::setw(10) << _contact[i].ft_get_first_name() << "|";
        else
        {
            for (int j = 0 ; j < 9 ; j++)
                std::cout << _contact[i].ft_get_first_name()[j];
            std::cout << ".|";
        }
        if (_contact[i].ft_get_last_name().length() < 10)
            std::cout << std::setw(10) << _contact[i].ft_get_last_name() << "|";
        else
        {
            for (int j = 0 ; j < 9 ; j++)
                std::cout << _contact[i].ft_get_last_name()[j];
            std::cout << ".|";
        }
        if (_contact[i].ft_get_nickname().length() < 10)
            std::cout << std::setw(10) << _contact[i].ft_get_nickname() << "|" << std::endl;
        else
        {
            for (int j = 0 ; j < 9 ; j++)
                std::cout << _contact[i].ft_get_nickname()[j];
            std::cout << ".|";
        }
    }
    std::cout << "---------------------------------------------" << std::endl;
    return (true);
}

int  PhoneBook::get_total(void)
{
    return (_total);
}

bool PhoneBook::print_contact(int x)
{
    if (x < 1 || x > _index)
        return (false);
	std::cout << "---------------------" << std::endl;
	std::cout << "| First Name        | --> " << _contact[x - 1].ft_get_first_name() << std::endl;;
	std::cout << "---------------------" << std::endl;
	std::cout << "| Last Name         | --> " << _contact[x - 1].ft_get_last_name() << std::endl;;
	std::cout << "---------------------" << std::endl;
	std::cout << "| NickName          | --> " << _contact[x - 1].ft_get_nickname() << std::endl;
	std::cout << "---------------------" << std::endl;
	std::cout << "| Phone number 📞   | --> " << _contact[x - 1].ft_get_phone_nbr() << std::endl;	
	std::cout << "---------------------" << std::endl;
	std::cout << "| Darkest secret 🤫 | --> " << _contact[x - 1].ft_get_secret() << std::endl;
	std::cout << "---------------------" << std::endl;
    return (true);
}