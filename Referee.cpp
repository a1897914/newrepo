#include <iostream>
#include "Referee.h"


Referee::Referee(){
}
Player* Referee::refGame(Player* player1, Player* player2){
Move* p1_move = player1->makeMove();
Move* p2_move = player2->makeMove();

for(int i=0; i < p2_move -> getWinner().size(); i++ ){
if(p1_move -> getName() == p2_move -> getWinner().at(i)){
return player2;
}
}

for(int i=0; i < p2_move -> getLoser().size(); i++ ){
if(p1_move -> getName() == p2_move -> getLoser().at(i)){
return player1;
}
}

return nullptr;
}