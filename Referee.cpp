#include "Referee.h"
#include <iostream>

std::string Referee::determineWinner(Player* player1, Player* player2) {
    Move move1 = player1->makeMove();
    Move move2 = player2->makeMove();

    if (move1 == move2) {
        return "It's a tie!";
    } else if (beats(move1, move2)) {
        return player1->getName() + " wins!";
    } else {
        return player2->getName() + " wins!";
    }
}

bool Referee::beats(Move move1, Move move2) {
    return (move1 == Move::MONKEY && move2 == Move::ZOMBIE) ||
           (move1 == Move::ZOMBIE && move2 == Move::PIRATE) ||
           (move1 == Move::PIRATE && move2 == Move::NINJA) ||
           (move1 == Move::NINJA && move2 == Move::ROBOT) ||
           (move1 == Move::ROBOT && move2 == Move::MONKEY) ||
           (move1 == Move::MONKEY && move2 == Move::NINJA) ||
           (move1 == Move::NINJA && move2 == Move::ZOMBIE) ||
           (move1 == Move::ZOMBIE && move2 == Move::ROBOT) ||
           (move1 == Move::ROBOT && move2 == Move::PIRATE) ||
           (move1 == Move::PIRATE && move2 == Move::MONKEY);
}
