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


std::string isLeapYear(const int year) {
    if (year % 4 == 0 && year != 0)
        return "Leap Year!";
    return "Not a leap year";
}

bool checkLeapYearFn() {

    std::cout << isLeapYear(getInputValue()) << std::endl;

    std::cout << "Would you like to check another year? (y/n) ";

    std::string response;
    std::transform(response.begin(), response.end(), response.begin(), ::tolower);
    std::cin >> response;

    while (response != "y" &&
        response != "yes" &&
        response != "n" &&
        response != "no"
    ) {
        std::cout << "Please enter a valid choice. (y is yes, n is no) ";
        std::transform(response.begin(), response.end(), response.begin(), ::tolower);
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