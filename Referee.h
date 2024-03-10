#include <iostream>
#include "Computer.h"
#include "Human.h"

#ifndef REFEREE_H
#define REFEREE_H

class Referee{
public:
Referee();
Player* refGame(Player* player1, Player* player2);
};

#endif