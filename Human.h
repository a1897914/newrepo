#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"

class Human : public Player {
public:
    Human(const std::string& playerName);
    Move makeMove();
};

#endif // HUMAN_H
