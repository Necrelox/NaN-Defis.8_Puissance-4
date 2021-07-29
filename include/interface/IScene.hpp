/*
** EPITECH PROJECT, 2021
** IScene
** File description:
** IScene
*/

#ifndef NAN_DEFIS_8_PUISSANCE_4_ISCENE_HPP
#define NAN_DEFIS_8_PUISSANCE_4_ISCENE_HPP

#include <vector>
#include <SFML/Graphics.hpp>

class IScene
{
public:
    ~IScene() = default;
    virtual void EventManager(short EvenID, sf::RenderWindow &window) = 0;
    virtual void draw(sf::RenderWindow &window) = 0;
};

#endif //NAN_DEFIS_8_PUISSANCE_4_ISCENE_HPP
