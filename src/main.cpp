/*
** EPITECH PROJECT, 2021
** main
** File description:
** main
*/

#include "Error.hpp"
#include "Core.hpp"
#include <iostream>

int main(void)
{
    try {
        Core core;
    }
    catch (Error &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}