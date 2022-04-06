/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 08:48:10 by abouhlel          #+#    #+#             */
/*   Updated: 2022/04/06 12:32:31 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

//******************************************************************************
void	print_char(std::string const &str)
{
	std::stoi(str);
	double d = std::stod(str);
	char	c = -1;

	if (d >= std::numeric_limits<char>::min() && d <= std::numeric_limits<char>::max())
		c = static_cast<char>(d);

	if (std::isprint(c))
		std::cout << "char: '" << c << "'" <<std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
}
//******************************************************************************
void	print_int(std::string const &str)
{
	//std::stoi(str);

	std::cout << "int: " << static_cast<int>(std::stod(str)) << std::endl;
}
//******************************************************************************
void	print_float(std::string const &str)
{
	std::stof(str);

	std::cout << "float: " << static_cast<float>(std::stod(str)) << "f" << std::endl;
}
//******************************************************************************
void	print_double(std::string const &str)
{
	double d = std::stod(str);

	std::cout << "double: " << d << std::endl;
}
//******************************************************************************
void	check_error(void (*fn)(std::string const &), std::string const &str, std::string const &type)
{
	try
	{
		fn(str);
	}
	catch (std::out_of_range &)
	{
		std::cout << type  << ": Non displayable" << std::endl;
	}
	catch (std::invalid_argument &)
	{
		std::cout << type  << ": impossible" << std::endl;
	}
}
//******************************************************************************
int	main(int ac, char **av)
{
    if (ac != 2)
	    std::cout << "ERROR : 🚫 Wrong number of arguments" << std::endl;
	else
	{
		if (((std::string)av[1]).length() == 1 && !std::isdigit((unsigned char)(av[1][0])))
		{
            std::cout << "char: '" << av[1][0] << "'" << std::endl;
            std::cout << "int: " << static_cast < int > (av[1][0]) << std::endl;
            std::cout << "float: " << static_cast < float > (av[1][0]) << "f"  << std::endl;
            std::cout << "double: " << static_cast < double > (av[1][0]) << std::endl;
		}
        else
        {
            std::cout << "here---->\n";
			check_error(&print_char, av[1], std::string("char"));
			check_error(&print_int, av[1], std::string("int"));
			check_error(&print_float, av[1], std::string("float"));
			check_error(&print_double, av[1], std::string("double"));
        }
	}
	return (0);
}
//******************************************************************************