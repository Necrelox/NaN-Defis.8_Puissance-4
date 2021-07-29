/*
** EPITECH PROJECT, 2021
** CoreEventManager
** File description:
** CoreEventManager
*/

#include "Core.hpp"
#include <iostream>

void Core::EventManager()
{
    for (size_t i = 0; i < this->QueueEvent.size(); ++i) {
        short EventID = this->QueueEvent.back();
        if (EventID == CLOSE)
            this->window.close();
        else
            this->Scene[0]->EventManager(EventID, this->window);
        this->QueueEvent.pop_back();
    }
}