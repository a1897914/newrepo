#ifndef PLAYER_H
#define PLAYER_H

#include "Move.h"

using namespace std;

class Player{
public:
Player();
Player(string n);
virtual Move* makeMove()=0;
string getName();

protected:
string name;
};

#endif