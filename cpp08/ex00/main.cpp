#include "easyfind.hpp"

int main(void)
{
    std::array <int, 9> a_tab = {11, 22, 33, 44, 55, 66, 77, 88, 99};
    std::cout << "➖➖➖➖➖➖➖➖➖➖➖" << std::endl;
    std::cout << "     T_E_S_T  (1)  " << std::endl;
    std::cout << "➖➖➖➖➖➖➖➖➖➖➖" << std::endl;
    easyFind(a_tab, 44);
    std::cout << "➖➖➖➖➖➖➖➖➖➖➖" << std::endl;
    std::cout << "     T_E_S_T  (2)  " << std::endl;
    std::cout << "➖➖➖➖➖➖➖➖➖➖➖" << std::endl;
    easyFind(a_tab, 43);
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