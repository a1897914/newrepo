#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
public:
    virtual ~Player() {} // Virtual destructor
    virtual char makeMove() = 0;
    virtual std::string getName() = 0;
};

#endif