#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"

class Computer : public Player {
public:
    Computer(const std::string& playerName);
    Move makeMove();
};

#endif // COMPUTER_H
