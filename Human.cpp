#include "Human.h"
#include "Move.h"

Human::Human() {}

Move* Human::makeMove() {
    return new Rock();
}




std::string Human::getName() {
    return "Human";
}