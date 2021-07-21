//
// Created by Necrelox on 2021-07-18.
//

#include "Window.hpp"
#include <SFML/Graphics.hpp>

short Window::getDepthMaxOfVector(std::vector<Entity *> &a)
{
    short DepthMax = 0;
    for (size_t i = 0; i < a.size(); ++i)
        DepthMax = a[i]->depth > DepthMax ? a[i]->depth :DepthMax;
    return DepthMax;
}

void Window::WindowDisplayScene(Scene &scene)
{
    this->window.clear(sf::Color(0, 42, 224, 255));
    for (short i = 0, DepthMax = this->getDepthMaxOfVector(scene.layer); i <= DepthMax ; ++i)
        for (size_t j = 0; j < scene.layer.size(); ++j)
            if (scene.layer[j]->draw == 1 && scene.layer[j]->depth == i)
                this->window.draw(scene.layer[j]->entity);

    for (short i = 0, DepthMax = this->getDepthMaxOfVector(scene.button); i <= DepthMax ; ++i)
        for (size_t j = 0; j < scene.button.size(); ++j)
            if (scene.button[j]->draw == 1 && scene.button[j]->depth == i)
                this->window.draw(scene.button[j]->entity);
    this->window.display();
}
