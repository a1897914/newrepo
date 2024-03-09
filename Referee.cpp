#include "Referee.h"
#include "Move.h"

Referee::Referee() {}

Player* Referee::refGame(Player* player1, Player* player2) {
    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();

    std::string name1 = move1->getName();
    std::string name2 = move2->getName();

    if (name1 == name2) {
        return nullptr;
    } else {
        if ((name1 == "Rock" && (name2 == "Scissors" || name2 == "Monkey" || name2 == "Zombie")) ||
            (name1 == "Paper" && (name2 == "Rock" || name2 == "Pirate")) ||
            (name1 == "Scissors" && (name2 == "Paper" || name2 == "Robot")) ||
            (name1 == "Monkey" && (name2 == "Robot" || name2 == "Ninja")) ||
            (name1 == "Robot" && (name2 == "Pirate" || name2 == "Zombie")) ||
            (name1 == "Pirate" && (name2 == "Ninja" || name2 == "Zombie")) ||
            (name1 == "Ninja" && (name2 == "Zombie" || name2 == "Monkey")) ||
            (name1 == "Zombie" && (name2 == "Monkey" || name2 == "Paper"))) {
            delete move2; 
            return player1;
        } else {
            delete move1; 
            return player2;
        }
    }
}
