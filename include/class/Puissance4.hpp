//
// Created by Necrelox on 2021-07-18.
//

#ifndef PUISSANCE4_PUISSANCE4_H
#define PUISSANCE4_PUISSANCE4_H

#include "Window.hpp"
#include "ech_twister.h"

class Puissance4 {
    enum eventId {CLOSE, LEFTCLIC};
    std::vector<short> QueueEvent;
    Window window;
    Scene scene;
    unsigned turn:1;
public:
    explicit Puissance4();
    ~Puissance4();

private:
    void InitializeScene();
    void CheckColumnAndAddPion();
    void PhysicPion();
    void EventManager();
};


#endif //PUISSANCE4_PUISSANCE4_H
