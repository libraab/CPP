/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 09:52:44 by abouhlel          #+#    #+#             */
/*   Updated: 2022/04/07 13:28:30 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

//******************************************************************************
    bool	str_is_nan(std::string const &str)
    {
        for(int i = 0; str[i + 1]; i++)
        {
            if(!std::isdigit(str[i]) && str[i] != '.')
                return (true);
        }
        return (false);
    }
//******************************************************************************
    void print_char(unsigned char c)
    {
        std::cout << "char: '" << c << "'" << std::endl;
        std::cout << "int: " << static_cast < int > (c) << std::endl;
        std::cout << "float: " << static_cast < float > (c) << "f"  << std::endl;
        std::cout << "double: " << static_cast < double > (c) << std::endl;
    }
//******************************************************************************
    void print_nan(void)
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
    }
//******************************************************************************
    void print_nbr(float x)
    {
        if (static_cast < int > (x) > 126 || static_cast < int > (x) < 32)
            std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: " << static_cast < char > (x) << std::endl;
        std::cout << "int: " << static_cast < int > (x) << std::endl;
        std::cout << "float: " << static_cast < float > (x) << "f" << std::endl;
        std::cout << "double: " << static_cast < double > (x) << std::endl;
    }
//*******************************************************************************
int	main(int ac, char **av)
{
    if (ac != 2)
	    std::cout << "ERROR : 🚫 Wrong number of arguments" << std::endl;
	else
	{
		if (((std::string)av[1]).length() == 1 && !std::isdigit((unsigned char)(av[1][0])))
            print_char(static_cast < unsigned char > (av[1][0]));
        else if (((std::string)av[1]).length() > 1 && str_is_nan(av[1]))
            print_nan();
        else
        {
            if ()
            float x = std::atof(av[1]);
            print_nbr(x);
        }
	}
	return (0);
}
//******************************************************************************