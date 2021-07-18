//
// Created by ruby on 2021-07-18.
//

#ifndef DEFIS_8NAN_PUISSANCE4_WINDOW_HPP
#define DEFIS_8NAN_PUISSANCE4_WINDOW_HPP

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <vector>
#include <string>

class Window
{
public:
    enum eventId {CLOSE};
    explicit Window();
    ~Window();
    bool WindowIsOpen();
    void WindowDisplayScene();
    void WindowCatchEvent(std::vector<short> &QueueEvent);
    void WindowClose();

private:
    sf::RenderWindow window;
    sf::Event event;
    std::string _Title = "Puissance4";
    short _Height = 720;
    short _Width = 1280;

};


#endif //DEFIS_8NAN_PUISSANCE4_WINDOW_HPP
