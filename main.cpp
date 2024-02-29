#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include <iostream>

int main() {
    Player* human = new Human("Mei");
    Player* computer = new Computer();
    Referee referee;

    Player* winner = referee.refGame(human, computer);

    if (winner == nullptr) {
        std::cout << "It's a Tie\n";
    } else {
        std::cout << winner->getName() << " Wins\n";
    }

    delete human;
    delete computer;

    return 0;
}