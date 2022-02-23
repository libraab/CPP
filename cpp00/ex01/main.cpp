#include "contact.class.hpp"

void	ft_enter_data(contact *contact)
{
	std::string	cmd;
	std::string	tmp;
	int		x;
	static int	contact_nbr;

	contact_nbr = 0;
	while (1)
	{
		std::cout << std::endl << "Please enter a command (ADD, SEARCH, EXIT) --> ";
		std::getline(std::cin, cmd);

		if (cmd == "SEARCH")
		{
			if (contact_nbr == 0)
			{
				std::cout << std::endl << "You have no contact 😢" << std::endl;
				continue;
			}
			std::cout << std::endl << "Who are you looking for ?" << std::endl << std::endl;
			std::cout << "Please enter a number between 1 & 8 --> ";
			std::cin >> x;
			if (x < 1 || x > 8)
			{
				std::cout << std::endl << "⛔️ Wrong number ⛔️" << std::endl;
				std::cout << std::endl << "Try again and don't play smart" << std::endl << std::endl;
				std::cout << "Please enter a number between 1 & 8 --> ";
				std::cin >> x;
				if (x < 1 || x > 8)
				{
					std::cout << std::endl << "I warned you" << std::endl;
					exit(0);
				}
			}
			std::cout << "________________________________________" << std::endl;
			std::cout << "|INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
			std::cout << "________________________________________" << std::endl;
			std::cout << "|  " << x << "  |";
			if (contact[x - 1].ft_get_first_name().length() < 10)
				std::cout << std::setw(10) << contact[x - 1].ft_get_first_name() << "|";
			else
			{
				for (int j = 0 ; j < 9 ; j++)
					std::cout << contact[x - 1].ft_get_first_name()[j];
				std::cout << ".|";
			}
			if (contact[x - 1].ft_get_last_name().length() < 10)
				std::cout << std::setw(10) << contact[x - 1].ft_get_last_name() << "|";
			if (contact[x - 1].ft_get_nickname().length() < 10)
				std::cout << std::setw(10) << contact[x - 1].ft_get_nickname() << "|" << std::endl;
			std::cout << "________________________________________" << std::endl;
			
			continue;
		}
	
		else if (cmd == "ADD")
		{
			if (contact_nbr == 8)
				contact_nbr = 0;
			std::cout << std::endl << "Enter first name --> ";
			std::getline(std::cin, tmp);
			contact[contact_nbr].ft_stock_first_name(tmp);

			std::cout << "Enter last name --> ";
			std::getline(std::cin, tmp);
			contact[contact_nbr].ft_stock_last_name(tmp);
	
			std::cout << "Enter nickname --> ";
			std::getline(std::cin, tmp);
			contact[contact_nbr].ft_stock_nickname(tmp);

			std::cout << "Enter phone number --> ";
			std::getline(std::cin, tmp);
			contact[contact_nbr].ft_stock_phone_nbr(tmp);

			std::cout << "Enter darkest secret --> ";
			std::getline(std::cin, tmp);
			contact[contact_nbr].ft_stock_secret(tmp);
			std::cout << std::endl << "CONTACT ADDED ✅" << std::endl;
		
			contact_nbr++;
			continue;
		}

		else if (cmd == "EXIT")
		{
			std::cout << "Bye hun 😘" << std::endl;
			exit(0);
		}
		continue;
	}
}

int main(int ac, char **av)
{
	(void) av;
	contact contact[8];
	if (ac == 1)
		ft_enter_data(contact);
	return (0);
}
