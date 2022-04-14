#pragma once

#include <algorithm>
#include <iostream>
#include <array>
#include <vector>

template <typename T>

void   easyFind(T &container, int const x)
{
    typename T::iterator    tmp = (std::find(container.begin(), container.end(), x));

    if (tmp != container.end())
        std::cout << "Occurence found ✅" << std::endl;
    else
        std::cout << "No occurence found ❌" << std::endl;
}