// Read two integers from the user and print their sum, difference, product, quotient, and remainder — each on its own line, labelled.

#include <iostream>
#include <limits>

int main() {
    int input1 = 0;
    int input2 = 0;

    std::cout << "Give me a number: ";
    while (!(std::cin >> input1)) {
        std::cout << "Enter a valid number";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    std::cout << "Give me another number: ";
    while (!(std::cin >> input2)) {
        std::cout << "Enter a valid number";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    std::cout << "Sum: " << input1 + input2 << std::endl
            << "Difference: " << input2 - input1 << std::endl
            << "Product: " << input1 * input2 << std::endl
            << "Quotient: " << input2 / input1 << std::endl
            << "Remainder: " << input2 % input1 << std::endl;

    return 0;
}