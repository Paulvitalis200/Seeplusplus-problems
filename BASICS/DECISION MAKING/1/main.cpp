// Read a number and print whether it's positive, negative, or zero.

#include <iostream>
#include <limits>

int main() {

    int inputNumber;
    std::cout << "Give me a number: ";

    while (!(std::cin >> inputNumber)) {
        std::cout << "Give me a valid number: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    if (inputNumber < 0) {
        std::cout << "The number is negative" << std::endl;
    } else if(inputNumber > 0) {
        std::cout << "The number is positive" << std::endl;
    } else {
        std::cout << "The number is zero" << std::endl;
    }
    return 0;
}