/*
** EPITECH PROJECT, 2021
** CoreEventCatch
** File description:
** CoreEventCatch
*/

#include "Core.hpp"
#include <chrono>


void Core::CatchEvent()
{
    while (this->window.pollEvent(this->event)) {
        if (this->event.type == sf::Event::Closed)
            this->QueueEvent.push_back(CLOSE);
    }

    static auto time_start = std::chrono::high_resolution_clock::now();
    std::chrono::milliseconds elapse(200);
    auto time_stop = std::chrono::high_resolution_clock::now();
    sf::Vector2 MousePos = sf::Mouse::getPosition(window);

    if (MousePos.x >= 0 && MousePos.x <= 1507
        && MousePos.y >= 0 && MousePos.y <= 770
        && sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
            if (!this->QueueEvent.empty()) {
                if (this->QueueEvent.back() != CLICMS1) {
                    if (elapse <= std::chrono::duration_cast<std::chrono::milliseconds>(time_stop - time_start)) {
                        time_start = time_stop;
                        this->QueueEvent.push_back(CLICMS1);
                    }
                }
            } else {
                if (elapse <= std::chrono::duration_cast<std::chrono::milliseconds>(time_stop - time_start)) {
                    time_start = time_stop;
                    this->QueueEvent.push_back(CLICMS1);
                }
            }
    }
}
