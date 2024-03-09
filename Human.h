#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"
#include <string>

class Human : public Player {
private:
    std::string playerName;

public:
    Human(const std::string& name);
    Move makeMove();
};

#endif // HUMAN_H
