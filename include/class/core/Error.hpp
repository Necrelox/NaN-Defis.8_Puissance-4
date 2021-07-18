//
// Created by ruby on 2021-07-18.
//

#ifndef DEFIS_8NAN_PUISSANCE4_ERROR_H
#define DEFIS_8NAN_PUISSANCE4_ERROR_H

#include <stdexcept>

class Error : public std::exception {
public:

private:
    std::string _msg;

public:
    Error(std::string msg) : _msg(msg) {};
    const char *what() const noexcept {return _msg.c_str();};
};

#endif //DEFIS_8NAN_PUISSANCE4_ERROR_H
