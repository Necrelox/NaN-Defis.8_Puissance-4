/*
** EPITECH PROJECT, 2021
** Error
** File description:
** Error
*/

#ifndef NAN_DEFIS_8_PUISSANCE_4_ERROR_HPP
#define NAN_DEFIS_8_PUISSANCE_4_ERROR_HPP

#include <stdexcept>

class Error : public std::exception {
public:

private:
    std::string _msg;

public:
    Error(std::string msg) : _msg(msg) {};
    const char *what() const noexcept {return _msg.c_str();};
};

#endif //NAN_DEFIS_8_PUISSANCE_4_ERROR_HPP
