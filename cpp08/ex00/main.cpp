/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <abouhlel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 15:13:03 by abouhlel          #+#    #+#             */
/*   Updated: 2022/04/15 15:13:04 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
    std::list <int> l_tab;
    l_tab.push_back(11);
    l_tab.push_back(22);
    l_tab.push_back(33);
    l_tab.push_back(44);
    l_tab.push_back(55);
    l_tab.push_back(66);
    std::cout << "➖➖➖➖➖➖➖➖➖➖➖" << std::endl;
    std::cout << "     T_E_S_T  (1)  " << std::endl;
    std::cout << "➖➖➖➖➖➖➖➖➖➖➖" << std::endl;
    easyFind(l_tab, 44);
    std::cout << "➖➖➖➖➖➖➖➖➖➖➖" << std::endl;
    std::cout << "     T_E_S_T  (2)  " << std::endl;
    std::cout << "➖➖➖➖➖➖➖➖➖➖➖" << std::endl;
    easyFind(l_tab, 43);

    //------------------------------------------------------------
    std::vector <int> v_tab;
    v_tab.push_back(00);
    v_tab.push_back(11);
    v_tab.push_back(33);
    v_tab.push_back(55);
    v_tab.push_back(77);
    v_tab.push_back(99);
    std::cout << "➖➖➖➖➖➖➖➖➖➖➖" << std::endl;
    std::cout << "     T_E_S_T  (3)  " << std::endl;
    std::cout << "➖➖➖➖➖➖➖➖➖➖➖" << std::endl;
    easyFind(v_tab, 55);
    std::cout << "➖➖➖➖➖➖➖➖➖➖➖" << std::endl;
    std::cout << "     T_E_S_T  (4)  " << std::endl;
    std::cout << "➖➖➖➖➖➖➖➖➖➖➖" << std::endl;
    easyFind(v_tab, 22);

    return(0);
}