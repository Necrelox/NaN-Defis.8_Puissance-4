//
// Created by Necrelox on 2021-07-18.
//

#ifndef DEFIS_8NAN_PUISSANCE4_WINDOW_HPP
#define DEFIS_8NAN_PUISSANCE4_WINDOW_HPP

#include "Scene.hpp"
#include <SFML/Window.hpp>

class Window
{
public:
    enum eventId {CLOSE, LEFTCLIC};
    explicit Window();
    ~Window();
    bool WindowIsOpen();
    void WindowDisplayScene(Scene &scene);
    void WindowCatchEvent(std::vector<short> &QueueEvent, std::vector<Entity *> &buttons);
    void WindowClose();

private:
    short getDepthMaxOfVector(std::vector<Entity *> &a);
    sf::RenderWindow window;
    sf::Event event;
    std::string _Title = "Puissance4";
    short _Height = 770;
    short _Width = 1285 + 222; /** grid 1285 + turn player 222 */
};


#endif //DEFIS_8NAN_PUISSANCE4_WINDOW_HPP
