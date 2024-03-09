#ifndef MOVE_H
#define MOVE_H

#include <string>

enum class MoveType {
    MONKEY,
    ROBOT,
    PIRATE,
    NINJA,
    ZOMBIE
};

class Move {
private:
    MoveType moveType;

public:
    Move(MoveType type);
    std::string getName() const;
};

#endif // MOVE_H
