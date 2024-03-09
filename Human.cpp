#include "Human.h"
#include <iostream>

Human::Human(const std::string& playerName) : Player(playerName) {}

Move Human::makeMove() {
    int choice;
    std::cout << name << ", your turn! Choose a move:\n";
    std::cout << "1. Monkey\n2. Robot\n3. Pirate\n4. Ninja\n5. Zombie\n";
    std::cin >> choice;

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
            std::cerr << "Invalid choice! Defaulting to Monkey.\n";
            return Move::MONKEY;
    }
}
