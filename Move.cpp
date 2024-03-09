#include "Move.h"

Move::Move(MoveType type) : moveType(type) {}

std::string Move::getName() const {
    switch (moveType) {
        case MoveType::MONKEY:
            return "Monkey";
        case MoveType::ROBOT:
            return "Robot";
        case MoveType::PIRATE:
            return "Pirate";
        case MoveType::NINJA:
            return "Ninja";
        case MoveType::ZOMBIE:
            return "Zombie";
        default:
            return "Unknown";
    }
}
