/*
** EPITECH PROJECT, 2021
** IntializePuissance4
** File description:
** IntializePuissance4
*/

#include "Puissance4.hpp"
#include "Error.hpp"
#include "ech_twister.h"

Puissance4::Puissance4()
{
    ECHMT_S RND = ech_seedRand(time(NULL));
    this->Turn = ech_genRandom(&RND) % 2;
    Entity *BackGrid = new Entity;
    BackGrid->texture.setSmooth(true);
    if (!BackGrid->texture.loadFromFile("./ressources/Game/BackgroundGrid.png"))
        throw Error("Error : GridTexture loadFromFile.");
    BackGrid->entity.setTexture(BackGrid->texture);
    BackGrid->depth = 0;
    BackGrid->draw = 1;
    BackGrid->entity.setPosition(0, 50);
    this->layer.push_back(BackGrid);

    Entity *Grid = new Entity;
    Grid->texture.setSmooth(true);
    if (!Grid->texture.loadFromFile("./ressources/Game/Grid.png"))
        throw Error("Error : GridTexture loadFromFile.");
    Grid->entity.setTexture(Grid->texture);
    Grid->depth = 5;
    Grid->draw = 1;
    Grid->entity.setPosition(0, 50);
    this->layer.push_back(Grid);

    Entity *TurnRed = new Entity;
    TurnRed->texture.setSmooth(true);
    if (!TurnRed->texture.loadFromFile("./ressources/Game/TourRed.png"))
        throw Error("Error : TurnRedTexture loadFromFile.");
    TurnRed->entity.setTexture(TurnRed->texture);
    TurnRed->depth = 9;
    TurnRed->draw = 0;
    TurnRed->entity.setPosition(860, 50);
    this->layer.push_back(TurnRed);

    Entity *TurnYellow = new Entity;
    TurnYellow->texture.setSmooth(true);
    if (!TurnYellow->texture.loadFromFile("./ressources/Game/TourYellow.png"))
        throw Error("Error : TurnRedTexture loadFromFile.");
    TurnYellow->entity.setTexture(TurnYellow->texture);
    TurnYellow->depth = 10;
    TurnYellow->draw = 0;
    TurnYellow->entity.setPosition(860, 50);
    this->layer.push_back(TurnYellow);


    for (float i = 0, x_pos = 9; i < 7 ; ++i, x_pos += 118.5) {
        Entity *Column = new Entity;
        Column->texture.setSmooth(true);
        if (!Column->texture.loadFromFile("./ressources/Game/GridHover.png"))
            throw Error("Error : GridTexture loadFromFile.");
        Column->entity.setTexture(Column->texture);
        Column->depth = 6;
        Column->draw = 0;
        Column->entity.setPosition(x_pos, 50);
        this->button.push_back(Column);
    }
}

Puissance4::~Puissance4()
{
    for (size_t i = 0; i < this->layer.size(); ++i)
        delete this->layer[i];
    for (size_t i = 0; i < this->button.size(); ++i)
        delete this->button[i];
    for (size_t i = 0; i < this->pion.size(); ++i)
        delete this->pion[i];
}