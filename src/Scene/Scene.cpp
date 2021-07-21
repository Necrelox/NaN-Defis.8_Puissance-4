//
// Created by Necrelox on 2021-07-18.
//

#include "Error.hpp"
#include "Puissance4.hpp"

void Puissance4::InitializeScene()
{;
    Entity *BackGrid = new Entity;
    BackGrid->texture.setSmooth(true);
    if (!BackGrid->texture.loadFromFile("./ressources/Game/BackgroundGrid.png"))
        throw Error("Error : GridTexture loadFromFile.");
    BackGrid->entity.setTexture(BackGrid->texture);
    BackGrid->depth = 0;
    BackGrid->draw = 1;
    BackGrid->entity.setPosition(0, 50);
    this->scene.layer.push_back(BackGrid);

    Entity *Grid = new Entity;
    Grid->texture.setSmooth(true);
    if (!Grid->texture.loadFromFile("./ressources/Game/Grid.png"))
        throw Error("Error : GridTexture loadFromFile.");
    Grid->entity.setTexture(Grid->texture);
    Grid->depth = 5;
    Grid->draw = 1;
    Grid->entity.setPosition(0, 50);
    this->scene.layer.push_back(Grid);


    for (float i = 0, x_pos = 9; i < 7 ; ++i, x_pos += 118.5) {
        Entity *Column = new Entity;
        Column->texture.setSmooth(true);
        if (!Column->texture.loadFromFile("./ressources/Game/GridHover.png"))
            throw Error("Error : GridTexture loadFromFile.");
        Column->entity.setTexture(Column->texture);
        Column->depth = 6;
        Column->draw = 0;
        Column->entity.setPosition(x_pos, 50);
        this->scene.button.push_back(Column);
    }
}

void Puissance4::CheckColumnAndAddPion()
{

}

void Puissance4::PhysicPion()
{
}

