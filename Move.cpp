#include "Move.h"

Move::Move(string n){
name = n;
if(name == "Rock"){
Winner.push_back("Scissors");
Loser.push_back("Paper");
}
else if(name == "Paper"){
Winner.push_back("Rock");
Loser.push_back("Scissors");
}
else if(name == "Scissors"){
Winner.push_back("Paper");
Loser.push_back("Rock");
}
else if(name == "Monkey"){
Winner.push_back("Ninja");
Winner.push_back("Robot");
Loser.push_back("Pirate");
Loser.push_back("Zombie");
}
else if(name == "Robot"){
Winner.push_back("Ninja");
Winner.push_back("Zombie");
Loser.push_back("Pirate");
Loser.push_back("Monkey");
}
else if(name == "Pirate"){
Winner.push_back("Monkey");
Winner.push_back("Robot");
Loser.push_back("Ninja");
Loser.push_back("Zombie");
}
else if(name == "Ninja"){
Winner.push_back("Zombie");
Winner.push_back("Pirate");
Loser.push_back("Monkey");
Loser.push_back("Robot");
}
else if(name == "Zombie"){
Winner.push_back("Pirate");
Winner.push_back("Monkey");
Loser.push_back("Ninja");
Loser.push_back("Robot");
}
}

string Move::getName(){
return name;
}

vector <string> Move::getWinner(){
return Winner;
}

vector <string> Move::getLoser(){
return Loser;
}
