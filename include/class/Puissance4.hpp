/*
** EPITECH PROJECT, 2021
** Puissance4
** File description:
** Puissance4
*/

#ifndef NAN_DEFIS_8_PUISSANCE_4_PUISSANCE4_HPP
#define NAN_DEFIS_8_PUISSANCE_4_PUISSANCE4_HPP

#include "IScene.hpp"
#include "Entity.hpp"

class Puissance4 : public IScene
{
public:
    Puissance4();
    ~Puissance4();
    void EventManager(short EvenID, sf::RenderWindow &window) override;
    void draw(sf::RenderWindow &window) override;
private:
    enum EventID {CLICMS1 = 1};
    void HoverLayer(sf::RenderWindow &window);
    void EventClic(sf::RenderWindow &window);
    bool CreatePion(short column);
    void PhysicPion();
    void DisplayTurn();
    unsigned Turn:1;
    std::vector <Entity *> layer;
    std::vector <Entity *> button;
    std::vector <Entity *> pion;
    std::vector <Entity *> particles;
};

#endif //NAN_DEFIS_8_PUISSANCE_4_PUISSANCE4_HPP
