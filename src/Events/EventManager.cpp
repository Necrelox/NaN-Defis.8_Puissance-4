//
// Created by Necrelox on 2021-07-18.
//

#include "Puissance4.hpp"

void Puissance4::EventManager()
{
    short EventID = -1;
    while (!this->QueueEvent.empty()) {
        EventID = this->QueueEvent.back();
        if (EventID == CLOSE)
            this->window.WindowClose();
        if (EventID == LEFTCLIC) {

            /** creer un pion de couleur si la column a de la place sinon fait rien*/
            /** appliquer la physique au pion */

        }
        this->QueueEvent.pop_back();
    }
}