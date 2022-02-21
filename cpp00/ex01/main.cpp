#include "contact.class.hpp"

void	ft_enter_data(contact *contact)
{
	std::string	cmd;
	std::string	tmp;
	int		x;
	static int	contact_nbr;

	std::cout << "Please enter a command (ADD, SEARCH, EXIT) --> ";
	std::getline(std::cin, cmd);

	if (cmd == "SEARCH")
	{
		std::cout << "Who are you looking for ?" << std::endl;
		std::cout << "Please enter a number between 1 & 8 --> ";
		std::getline(std::cin, tmp);
		std::cout << "_________________________________________________" << std::endl;
		std::cout << "| FIRST NAME |" << contact[tmp - 1].ft_get_first_name() << std::endl;
		std::cout << "_________________________________________________" << std::endl;
	}

	else if (cmd == "ADD")
	{
		if (contact_nbr == 8)
			std::cout << "🚫 NO MORE SPACE 🚫" << std::endl;
		else
		{
			std::cout << "Please enter first name --> ";
			std::getline(std::cin, tmp);
			contact[contact_nbr].ft_stock_first_name(tmp);

			std::cout << "Please enter last name --> ";
			std::getline(std::cin, tmp);
			contact[contact_nbr].ft_stock_last_name(tmp);

			std::cout << "Please enter nickname --> ";
			std::getline(std::cin, tmp);
			contact[contact_nbr].ft_stock_nickname(tmp);

			std::cout << "Please enter phone number --> ";
			std::getline(std::cin, tmp);
			contact[contact_nbr].ft_stock_phone_nbr(tmp);

			std::cout << "Please enter darkest secret --> ";
			std::getline(std::cin, tmp);
			contact[contact_nbr].ft_stock_secret(tmp);

			contact_nbr++;
		}
	}

	else if (cmd == "EXIT")
	{
		std::cout << "Bye hun 😘" << std::endl;
		exit(0);
	}

	else
		std::cout << "⛔️ WRONG COMMAND ⛔️" << std::endl;

	return;
}

int main(int ac, char **av)
{
	(void) av;
	contact contact[8];
	if (ac == 1)
		while(1)
			ft_enter_data(contact);
	return (0);
}
