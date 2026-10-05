// Write a function that takes a pointer and safely handles being passed 
// nullptr — it should print a message rather than crash. Call it both ways.


#include <iostream>

void increment(int* numPassed);

int main() {
    int myFirstNume = 10;
    int* mySecond = nullptr;

    increment(mySecond);
    increment(&myFirstNume);
    return 0;
}

void increment(int* numPassed) {
    if (numPassed == nullptr) {
        std::cout << "Nothing passed" << std::endl;
    } else {
        (*numPassed)++;
        std::cout << "Number: " << *numPassed << std::endl;
    }
}