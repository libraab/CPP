#include "contact.class.hpp"

std::string ft_get_first_name(void) const
{
	return(this->first_name);
}
void ft_stock_first_name(std::string const str)
{
	this->first_name = str;
}


std::string ft_get_last_name(void) const
{
	return(this->last_name);
}
void ft_stock_last_name(std::string const str)
{
	this->last_name = str;
}


std::string ft_get_nickname(void) const
{
	return(this->nickname);
}
void ft_stock_nickname(std::string const str)
{
	this->nickname = str;
}


std::string ft_get_phone_nbr(void) const
{
	return(this->phone_nbr);
}
void ft_stock_phone_nbr(std::string const str)
{
	this->phone_nbr = str;
}


std::string ft_get_secret(void) const
{
	return(this->secret);
}
void ft_stock_secret(std::string const str)
{
	this->secret = str;
}
