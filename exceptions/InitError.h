//
// Created by sarcoma on 6/23/19.
//

#ifndef GAME_UI_INITERROR_H
#define GAME_UI_INITERROR_H

#include <exception>
#include <string>

class InitError : public std::exception {
private:
    std::string message;
public:
    InitError(const char* message);
};

#endif //GAME_UI_INITERROR_H
