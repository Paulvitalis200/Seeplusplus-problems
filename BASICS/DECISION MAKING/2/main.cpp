// Read a year and print whether it's a leap year. 
// (Divisible by 4, except centuries, unless divisible by 400.)
#include <iostream>
#include <limits>

int main() {
    int year = 0;

    std::cout << "Give me a year: ";

    while (!(std::cin >> year)) {
        std::cout << "Give me a valid year: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    if ((year % 4) == 0 && (year != 0)) {
        std::cout << "Leap year" << std::endl;
    } else {
        std::cout << "Not a leap year" << std::endl;
    }
    return 0;
}