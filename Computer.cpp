#include "Computer.h"

Computer::Computer() : Player(){
name = "Computer";
}

Move* Computer::makeMove(){
Move* move = new Move("Rock");
return move;
}