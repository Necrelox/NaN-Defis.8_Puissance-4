//
// Created by ruby on 2021-07-18.
//

#include "Puissance4.hpp"

void Puissance4::EventManager()
{
    short EventID = -1;
    while (!this->QueueEvent.empty()) {
        EventID = this->QueueEvent.back();
        if (EventID == CLOSE)
            this->window.WindowClose();
        this->QueueEvent.pop_back();
    }
}