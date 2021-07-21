//
// Created by Necrelox on 2021-07-18.
//


#ifndef NAN_DEFIS_8_PUISSANCE_4_SCENE_HPP
#define NAN_DEFIS_8_PUISSANCE_4_SCENE_HPP

#include <vector>
#include <memory>
#include <string>
#include <SFML/Graphics.hpp>

class Entity
{
public:
    sf::Texture texture;
    sf::Sprite entity;
    int rand = -1; /**< number for set a random animation (if animation is created )*/
    short depth = -1; /**< depth of entity (for draw*/
    short draw = 0; /**< 0 for not draw 1 for draw*/
};

class Scene {
public:
    std::vector <Entity *> layer; /**< list of layer (background etc) */
    std::vector <Entity *> button; /**< list of buttons */
    std::vector <Entity *> pion; /**< list of entitys*/
    std::vector <Entity *> particles; /**< list of particules */
};

#endif //NAN_DEFIS_8_PUISSANCE_4_SCENE_HPP
