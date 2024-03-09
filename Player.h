#ifndef PLAYER_H
#define PLAYER_H

#include "Move.h"
#include <string>

class Player {
protected:
    std::string name;

public:
    Player(const std::string& playerName);
    virtual Move makeMove() = 0;
    std::string getName() const;
};

#endif // PLAYER_H
