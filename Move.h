#ifndef MOVE_H
#define MOVE_H

#include <iostream>
#include <vector>
using namespace std;

class Move{
public:
Move(string n);
string getName();
vector <string> getWinner();
vector <string> getLoser();
private:
string name;

vector <string> Winner;

vector <string> Loser;
};
#endif