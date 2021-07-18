//
// Created by ruby on 2021-07-18.
//

#ifndef PUISSANCE4_PUISSANCE4_H
#define PUISSANCE4_PUISSANCE4_H

#include "Window.hpp"
#include <vector>

class Puissance4 {
    enum eventId {CLOSE};
public:
    explicit Puissance4();
    ~Puissance4();

private:
    void EventManager();
    Window window;
    std::vector<short> QueueEvent;
};


#endif //PUISSANCE4_PUISSANCE4_H
