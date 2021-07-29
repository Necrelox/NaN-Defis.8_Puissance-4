/*
** EPITECH PROJECT, 2021
** DrawPuissance4
** File description:
** DrawPuissance4
*/

#include "Puissance4.hpp"
#include <SFML/Graphics.hpp>

void Puissance4::HoverLayer(sf::RenderWindow &window)
{
    sf::Vector2 MousePos = sf::Mouse::getPosition(window);
    for (size_t i = 0; i < this->button.size(); ++i) {
        if (MousePos.x >= this->button[i]->entity.getPosition().x
            && MousePos.x <= this->button[i]->entity.getPosition().x + 117
            && MousePos.y >= this->button[i]->entity.getPosition().y
            && MousePos.y <= this->button[i]->entity.getPosition().y + 720) {
            this->button[i]->draw = 1;
        }
        else
            this->button[i]->draw = 0;
    }
}

void Puissance4::DisplayTurn()
{
    if (this->Turn == 1)
        for (size_t j = 0; j < this->layer.size(); ++j) {
            if (this->layer[j]->depth == 9)
                this->layer[j]->draw = 1;
            if (this->layer[j]->depth == 10)
                this->layer[j]->draw = 0;
        }
    else
        for (size_t j = 0; j < this->layer.size(); ++j) {
            if (this->layer[j]->depth == 9)
                this->layer[j]->draw = 0;
            if (this->layer[j]->depth == 10)
                this->layer[j]->draw = 1;
        }
}

void Puissance4::draw(sf::RenderWindow &window)
{
    this->HoverLayer(window);
    this->PhysicPion();
    this->DisplayTurn();

    short MaxLayerDepth = Entity::getDepthMaxOfVector(this->layer);
    short MaxButtonDepth = Entity::getDepthMaxOfVector(this->button);
    short MaxPionDepth = Entity::getDepthMaxOfVector(this->pion);
    short DepthMax = MaxLayerDepth > MaxButtonDepth ? MaxLayerDepth :MaxButtonDepth;
    DepthMax = DepthMax > MaxPionDepth ? DepthMax : MaxPionDepth;

    for (short i = 0; i <= DepthMax ; ++i) {
        for (size_t j = 0; j < this->layer.size(); ++j)
            if (this->layer[j]->draw == 1 && this->layer[j]->depth == i)
                window.draw(this->layer[j]->entity);
        for (size_t j = 0; j < this->button.size(); ++j)
            if (this->button[j]->draw == 1 && this->button[j]->depth == i)
                window.draw(this->button[j]->entity);
        for (size_t j = 0; j < this->pion.size(); ++j)
            if (this->pion[j]->draw == 1 && this->pion[j]->depth == i)
                window.draw(this->pion[j]->entity);

    }


}