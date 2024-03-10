#include <iostream>
#include "Referee.h"


Referee::Referee(){
}
Player* Referee::refGame(Player* player1, Player* player2){
Move* p1_move = player1->makeMove();
Move* p2_move = player2->makeMove();

for(int size_t=0; size_t < p2_move -> getWinner().size(); size_t++ ){
if(p1_move -> getName() == p2_move -> getWinner().at(size_t)){
return player2;
}
}

for(int size_t=0; size_t < p2_move -> getLoser().size(); size_t++ ){
if(p1_move -> getName() == p2_move -> getLoser().at(size_t)){
return player1;
}
}

return nullptr;
}