#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <cstdlib>

class Contact
{
	public:
		Contact(void);
		~Contact(void);

		std::string ft_get_first_name(void) const;
		void    ft_stock_first_name(std::string const str);
		
		std::string ft_get_last_name(void) const;
		void    ft_stock_last_name(std::string const str);
		
		std::string ft_get_nickname(void) const;
		void    ft_stock_nickname(std::string const str);

		std::string ft_get_phone_nbr(void) const;
		void    ft_stock_phone_nbr(std::string const str);

		std::string ft_get_secret(void) const;
		void    ft_stock_secret(std::string const str);

	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_nbr;
		std::string secret;
};
