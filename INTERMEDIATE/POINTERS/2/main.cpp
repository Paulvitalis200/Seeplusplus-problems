//  Write a function void increase(int* number) that increments through a pointer,
//  and a second void increase(int& number) using a reference. 
//  Call both and note which one you'd prefer in real code.


#include <iostream>

void increase(int* number);
void increaseReference(int& number);

int main() {
    int firstNum = 20;
    int secondNum = 20;

    increase(&firstNum);
    increaseReference(secondNum);

    std::cout << firstNum << std::endl;
    std::cout << secondNum << std::endl;
    return 0;
}

void increase(int* number) {
    for (int i = 0; i < 10; i++) {
        (*number)++;
    }
}

void increaseReference(int& number) {
    for (int i = 0; i < 10; i++) {
        number++;
    }
}