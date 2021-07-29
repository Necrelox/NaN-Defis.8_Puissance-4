/*
** EPITECH PROJECT, 2021
** PhysicPuissance4
** File description:
** PhysicPuissance4
*/

#include "Puissance4.hpp"
#include <iostream>
#include <SFML/System.hpp>

void Puissance4::PhysicPion()
{
    for (size_t i = 0; i < this->pion.size(); ++i) {
        if (this->pion[i]->entity.getPosition().y < this->pion[i]->posFinal_y) {
            this->pion[i]->velocity += this->pion[i]->gravity;
            if ((this->pion[i]->entity.getPosition().y + this->pion[i]->velocity) > this->pion[i]->posFinal_y)
                this->pion[i]->entity.move(0, this->pion[i]->posFinal_y - this->pion[i]->entity.getPosition().y);
            else
                this->pion[i]->entity.move(0, this->pion[i]->velocity);
        }
    }
}