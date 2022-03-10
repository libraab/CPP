/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:16:23 by abouhlel          #+#    #+#             */
/*   Updated: 2022/03/10 15:43:29 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(void)
{
    Karen Bitching;
    
    Bitching.complain("DEBUG");
    Bitching.complain("INFO");
    Bitching.complain("WARNING");
    Bitching.complain("ERROR");

    return (0);
}
