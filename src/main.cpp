//
// Created by Necrelox on 2021-07-18.
//

#include "Error.hpp"
#include "Puissance4.hpp"
#include <iostream>

int main(void)
{
    try {
        Puissance4 core;
    }
    catch (Error &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}