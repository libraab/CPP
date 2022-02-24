#include "Contact.hpp"

Contact::Contact(void)
{
	return;
}

Contact::~Contact(void)
{
	return;
}

std::string Contact::ft_get_first_name(void) const
{
	return(this->first_name);
}
void Contact::ft_stock_first_name(std::string const str)
{
	this->first_name = str;
	return;
}


std::string Contact::ft_get_last_name(void) const
{
	return(this->last_name);
}
void Contact::ft_stock_last_name(std::string const str)
{
	this->last_name = str;
	return;
}


std::string Contact::ft_get_nickname(void) const
{
	return(this->nickname);
}
void Contact::ft_stock_nickname(std::string const str)
{
	this->nickname = str;
	return;
}


std::string Contact::ft_get_phone_nbr(void) const
{
	return(this->phone_nbr);
}
void Contact::ft_stock_phone_nbr(std::string const str)
{
	this->phone_nbr = str;
	return;
}


std::string Contact::ft_get_secret(void) const
{
	return(this->secret);
}
void Contact::ft_stock_secret(std::string const str)
{
	this->secret = str;
	return;
}
