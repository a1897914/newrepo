#include "Reverser.h"


int Reverser::reverseDigit(int value) {
    if (value < 0){ 

    return -1;

    } 

    return reverseDigitHelper(value, 0);
}

string Reverser::reverseString(string characters) {
    return reverseStringHelper(characters, 0);
}

int Reverser::reverseDigitHelper(int value, int reversed) {
    if (value == 0) {
        
    return reversed;
        
    }
    return reverseDigitHelper(value / 10, reversed * 10 + value % 10);
}

string Reverser::reverseStringHelper(string characters, int index) {
    if (index == characters.length()) {
        
    return "";
        
    }
    return reverseStringHelper(characters, index + 1) + characters[index];
}
