
// Write a program that declares a constant for the number of seconds in a minute,
// reads a number of minutes from the user, and prints the equivalent number of seconds.

#include <iostream>
#include <limits>

int main() {
    const int secondsInMinute = 60;
    int minutes = 0;

    std::cout << "Give me a number of minutes: ";
    while (!(std::cin >> minutes)) {
        std::cout << "Kindly input a valid number: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    std::cout << "Number of seconds: " << minutes * secondsInMinute << std::endl;

    std::cout << "Hello world" << std::endl;
    return 0;
}