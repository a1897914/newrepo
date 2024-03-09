#include "Computer.h"
#include <cstdlib>

Computer::Computer(const std::string& playerName) : Player(playerName) {}

Move Computer::makeMove() {
    int choice = rand() % 5 + 1;

    switch (choice) {
        case 1:
            return Move::MONKEY;
        case 2:
            return Move::ROBOT;
        case 3:
            return Move::PIRATE;
        case 4:
            return Move::NINJA;
        case 5:
            return Move::ZOMBIE;
        default:
            return Move::MONKEY; // Default to Monkey
    }
}
