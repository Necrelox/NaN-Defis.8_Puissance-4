/*
** EPITECH PROJECT, 2021
** Core
** File description:
** Core
*/

#ifndef NAN_DEFIS_8_PUISSANCE_4_CORE_HPP
#define NAN_DEFIS_8_PUISSANCE_4_CORE_HPP

#include "Puissance4.hpp"
#include <vector>
#include <memory>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

class Core {
public:
    explicit Core();
    ~Core();
private:
    enum EventID {CLOSE, CLICMS1};
    sf::Event event;
    sf::RenderWindow window;
    std::vector<EventID> QueueEvent;
    std::vector<std::unique_ptr<IScene>> Scene;

    void InitializeWindow();
    void CatchEvent();
    void EventManager();
    void Draw();
};

#endif //NAN_DEFIS_8_PUISSANCE_4_CORE_HPP
