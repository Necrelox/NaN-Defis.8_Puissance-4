/*
** EPITECH PROJECT, 2021
** CoreRenderWindow
** File description:
** CoreRenderWindow
*/

#include "Core.hpp"

void Core::Draw()
{
//    this->window.clear(sf::Color(0, 42, 224, 255));
    this->window.clear(sf::Color(0, 0, 0, 255));
    this->Scene[0]->draw(this->window);
    this->window.display();
}