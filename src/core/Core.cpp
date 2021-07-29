/*
** EPITECH PROJECT, 2021
** Core
** File description:
** Core
*/

#include "Core.hpp"

void Core::InitializeWindow()
{
    sf::ContextSettings addons;
    addons.antialiasingLevel = 16.0;
    addons.depthBits = 32;

    this->window.create(sf::VideoMode(1100, 770), "Puissance 4", sf::Style::Close, addons);
    this->window.setFramerateLimit(60);
    sf::Image iconPng;

    this->window.setKeyRepeatEnabled(false);
    iconPng.loadFromFile("./ressources/Icon/Icon.png");
    this->window.setIcon(iconPng.getSize().x, iconPng.getSize().y, iconPng.getPixelsPtr());
}

Core::Core()
{
    std::unique_ptr<Puissance4> game = std::make_unique<Puissance4>();
    this->Scene.push_back(std::move(game));

    this->InitializeWindow();
    while (this->window.isOpen()) {
        this->CatchEvent();
        this->EventManager();
        this->Draw();
    }

}

Core::~Core()
{
}