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
    short _Height = 1100;
    short _Width = 1285 + 222; /** grid 1285 + turn player 222 */

};


#endif //DEFIS_8NAN_PUISSANCE4_WINDOW_HPP
