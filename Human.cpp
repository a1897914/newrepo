#include "Human.h"
#include <iostream>

Human::Human(const std::string& name) : Player(name), playerName(name) {} 

Move Human::makeMove() {
    int choice;
    std::cout << playerName << ", your turn! Choose a move:\n";
    std::cout << "1. Monkey\n2. Robot\n3. Pirate\n4. Ninja\n5. Zombie\n";
    std::cin >> choice;

    switch (choice) {
        case 1:
            return MoveType::MONKEY;
        case 2:
            return MoveType::ROBOT;
        case 3:
            return MoveType::PIRATE;
        case 4:
            return MoveType::NINJA;
        case 5:
            return MoveType::ZOMBIE;
        default:
            std::cerr << "Invalid choice! Defaulting to Monkey.\n";
            return MoveType::MONKEY;
    }
}
