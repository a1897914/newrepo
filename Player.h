#pragma once
#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "Move.h"

class Player {
public:
    virtual Move* makeMove() = 0;
    virtual std::string getName() = 0;
};

class Human : public Player {
public:
    Move* makeMove() override;
    std::string getName() override;
};

class Computer : public Player {
public:
    Move* makeMove() override;
    std::string getName() override;
};

#endif