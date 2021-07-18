//
// Created by ruby on 2021-07-18.
//

#include "Error.hpp"
#include "Puissance4.hpp"


Puissance4::Puissance4()
{
    while (this->window.WindowIsOpen()) {
        this->window.WindowDisplayScene();
        this->window.WindowCatchEvent(this->QueueEvent);
        this->EventManager();
    }
}

Puissance4::~Puissance4()
{

}