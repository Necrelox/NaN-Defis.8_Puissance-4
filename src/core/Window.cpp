//
// Created by Necrelox on 2021-07-18.
//

#include "Window.hpp"
#include <SFML/Graphics.hpp>

Window::Window()
{
    sf::ContextSettings addons;
    addons.antialiasingLevel = 16.0;
    addons.depthBits = 32;
    this->window.create(sf::VideoMode(this->_Width, this->_Height), this->_Title, sf::Style::Close, addons);
    this->window.setFramerateLimit(60);
    sf::Image iconPng;
    this->window.setKeyRepeatEnabled(true);
    iconPng.loadFromFile("./ressources/Icon/Icon.png");
    this->window.setIcon(iconPng.getSize().x, iconPng.getSize().y, iconPng.getPixelsPtr());
}

Window::~Window()
{
}

void Window::WindowClose()
{
    this->window.close();
}

bool Window::WindowIsOpen()
{
    return this->window.isOpen();
}