#ifndef REVERSER_H
#define REVERSER_H
using namespace std;
#include <string>

class Reverser {
public:
    int reverseDigit(int value);
    string reverseString(string characters);

private:
    int reverseDigitHelper(int value, int reversed);
    string reverseStringHelper(string characters, int index);
};

#endif
