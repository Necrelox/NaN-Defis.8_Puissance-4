/*
** EPITECH PROJECT, 2021
** EventPuissance4
** File description:
** EventPuissance4
*/

#include "Puissance4.hpp"

void Puissance4::EventClic(sf::RenderWindow &window)
{
    sf::Vector2 MousePos = sf::Mouse::getPosition(window);
    for (size_t i = 0; i < this->button.size(); ++i) {
        if (MousePos.x >= this->button[i]->entity.getPosition().x
        && MousePos.x <= this->button[i]->entity.getPosition().x + 117
        && MousePos.y >= this->button[i]->entity.getPosition().y
        && MousePos.y <= this->button[i]->entity.getPosition().y + 720) {
            if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && i <= 6)
                this->CreatePion(i);
        }
    }
}

void Puissance4::EventManager(short EvenID, sf::RenderWindow &window)
{
    if (EvenID == CLICMS1)
        this->EventClic(window);
}