/*
** EPITECH PROJECT, 2021
** PionPuissance4
** File description:
** PionPuissance4
*/

#include "Puissance4.hpp"
#include "Error.hpp"

bool Puissance4::CreatePion(short column)
{
    short counPionColumn = 0;
    for (size_t i = 0; i < this->pion.size(); ++i) {
        if (column == 0) {
            if (this->pion[i]->posFinal_x ==  18)
                counPionColumn++;
        }
        else
            if (this->pion[i]->posFinal_x ==  (18 + (118 * column)))
                counPionColumn++;
    }

    if (counPionColumn >= 6)
        return false;
    this->Turn = this->Turn == 0 ? 1 : 0;

    Entity *Pion = new Entity;
    Pion->texture.setSmooth(true);
    if (this->Turn == 0) {
        if (!Pion->texture.loadFromFile("./ressources/Game/Red.png"))
            throw Error("Error : GridTexture loadFromFile.");
    }
    else
        if (!Pion->texture.loadFromFile("./ressources/Game/Yellow.png"))
            throw Error("Error : GridTexture loadFromFile.");
    Pion->entity.setTexture(Pion->texture);
    Pion->depth = 2;
    Pion->draw = 1;


    if (column == 0) {
        Pion->posFinal_x = 18;
        if (counPionColumn == 0)
            Pion->posFinal_y = 59 + (119*5);
        else if (counPionColumn < 6)
            Pion->posFinal_y = 59 + ((119*5) - counPionColumn*119);

        Pion->entity.setPosition(18, 0);
    }
    else {
        if (counPionColumn == 0)
            Pion->posFinal_y = 59 + (119*5);
        else if (counPionColumn < 6)
            Pion->posFinal_y = 59 + ((119*5) - counPionColumn*119);
        Pion->posFinal_x = 18 + (118 * column);
        Pion->entity.setPosition(18 + (118 * column), 0);
    }




    this->pion.push_back(Pion);
    return true;
}
//119 offset y
// 118 offset x
