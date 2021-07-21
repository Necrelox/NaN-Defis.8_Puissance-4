//
// Created by Necrelox on 2021-07-18.
//

#include "Window.hpp"
#include <SFML/Graphics.hpp>

void Window::WindowCatchEvent(std::vector<short> &QueueEvent, std::vector<Entity *> &buttons)
{
    sf::Vector2 MousePos = sf::Mouse::getPosition(this->window);
    for (size_t i = 0; i < buttons.size(); ++i) {
        if (MousePos.x >= buttons[i]->entity.getPosition().x
            && MousePos.x <= buttons[i]->entity.getPosition().x + 117
            && MousePos.y >= buttons[i]->entity.getPosition().y
            && MousePos.y <= buttons[i]->entity.getPosition().y + 720) {
            buttons[i]->draw = 1;
            if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
                QueueEvent.push_back(LEFTCLIC);
        }
        else
            buttons[i]->draw = 0;
    }
    while (this->window.pollEvent(this->event)) {
        if (this->event.type == sf::Event::Closed)
            QueueEvent.push_back(CLOSE);
    }
}