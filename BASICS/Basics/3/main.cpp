// Read a temperature in Celsius (may have decimals) and print it in Fahrenheit.
//  Use the formula F = C * 9/5 + 32. Careful: make sure the 9/5 doesn't bite you.

#include <iostream>
#include <limits>

int main() {
    double temperature = 0.0;

    std::cout << "Give me a celsius temperature: ";
    while (!(std::cin >> temperature)) {
        std::cout << "Enter a valid temperature";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    double outputTemperature = temperature * 9 / 5 + 32;
    std::cout << "Fahrenheit: " << outputTemperature << std::endl;
    return 0;
}