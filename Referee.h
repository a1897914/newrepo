#ifndef REFEREE_H
#define REFEREE_H

#include "Player.h"

class Referee {
public:
    static std::string determineWinner(Player* player1, Player* player2);
    static bool beats(Move move1, Move move2);
};

#endif // REFEREE_H
