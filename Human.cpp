#include "Human.h"

Human::Human() : Player(){
name = "Human";
}

Human::Human(string n) : Player(n){
}

Move* Human::makeMove(){
string enterMove;
std::cout << "Enter move: ";
std::cin >> enterMove;
Move* move = new Move(enterMove);
return move;
}