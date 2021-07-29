/*
** EPITECH PROJECT, 2021
** Entity
** File description:
** Entity
*/

#ifndef NAN_DEFIS_8_PUISSANCE_4_ENTITY_HPP
#define NAN_DEFIS_8_PUISSANCE_4_ENTITY_HPP

#include <SFML/Graphics.hpp>

class Entity
{
public:
    static short getDepthMaxOfVector(std::vector<Entity *> &a)
    {
        short DepthMax = 0;
        for (size_t i = 0; i < a.size(); ++i)
            DepthMax = a[i]->depth > DepthMax ? a[i]->depth :DepthMax;
        return DepthMax;
    }
    sf::Texture texture;
    sf::Sprite entity;
    float posFinal_x;
    float posFinal_y;
    float velocity = 0;
    float gravity = 9.8;
    int rand = -1;
    short depth = -1;
    short draw = 0;
};

#endif //NAN_DEFIS_8_PUISSANCE_4_ENTITY_HPP
