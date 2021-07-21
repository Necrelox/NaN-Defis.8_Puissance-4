//
// Created by Necrelox on 2021-07-18.
//

#include "Error.hpp"
#include "Puissance4.hpp"

Puissance4::Puissance4()
{
    ECHMT_S rndTurn = ech_seedRand(time(NULL));
    this->turn = ech_genRandom(&rndTurn) % 2;
    this->InitializeScene();
    while (this->window.WindowIsOpen()) {
        this->window.WindowDisplayScene(this->scene);
        this->window.WindowCatchEvent(this->QueueEvent, this->scene.button);
        this->EventManager();
    }
}

Puissance4::~Puissance4()
{
    for (size_t i = 0; i < this->scene.layer.size(); ++i)
        delete this->scene.layer[i];
}