#include "contact.class.hpp"

contact::contact(void)
{
	return;
}

contact::~contact(void)
{
	return;
}

std::string contact::ft_get_first_name(void) const
{
	return(this->first_name);
}
void contact::ft_stock_first_name(std::string const str)
{
	this->first_name = str;
	return;
}


std::string contact::ft_get_last_name(void) const
{
	return(this->last_name);
}
void contact::ft_stock_last_name(std::string const str)
{
	this->last_name = str;
	return;
}


std::string contact::ft_get_nickname(void) const
{
	return(this->nickname);
}
void contact::ft_stock_nickname(std::string const str)
{
	this->nickname = str;
	return;
}


std::string contact::ft_get_phone_nbr(void) const
{
	return(this->phone_nbr);
}
void contact::ft_stock_phone_nbr(std::string const str)
{
	this->phone_nbr = str;
	return;
}


std::string contact::ft_get_secret(void) const
{
	return(this->secret);
}
void contact::ft_stock_secret(std::string const str)
{
	this->secret = str;
	return;
}
