#include "Player.h"
#include "Move.h"

Move* Human::makeMove() {
  
    return new Rock();
}

std::string Human::getName() {
    return "Human";
}

Move* Computer::makeMove() {
  
    return new Rock();
}

std::string Computer::getName() {
    return "Computer";
}
