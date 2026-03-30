#include <iostream>
#include <limits>
#include <string>

int getInputValue() {
    int number;

    std::cout << "Give me a year: ";

    while (!(std::cin >> number)) {
        std::cout << "Give me a valid year in numbers: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    return number;
}


bool isLeapYear(int year) {
    if (year % 4 == 0)
        return true;
    return false;
}

bool checkLeapYearFn() {

    std::cout << isLeapYear(getInputValue()) << std::endl;

    std::cout << "Would you like to check another year? (y/n) ";

    std::string response;

    std::cin >> response;
    while (response != "y" &&
        response != "yes" &&
        response != "n" &&
        response != "no"
    ) {
        std::cout << "Please enter a valid choice. (y is yes, n is no) ";
        std::cin >> response;
    }

    if (response == "y")
        return true;

    if (response == "n")
        return false;

    return false;
}

int main() {
    bool checkLeapYear = true;

    while (checkLeapYear) {
        checkLeapYear = checkLeapYearFn();
    }
    return 0;
}