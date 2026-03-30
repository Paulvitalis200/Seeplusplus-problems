#include <iostream>
#include <limits>
#include <string>

constexpr double Fahrenheit = 32.00;
constexpr double Kelvin = 273.15;

double convertedKelvinTemperature;
double convertedFahrenheitTemperature;

double getInputValue() {
    double number;

    std::cout << "Give me a number value: ";

    while (!(std::cin >> number)) {
        std::cout << "Invalid value. Try again: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    return number;
}

double convertToKelvin(double inputValue) {
    double convertedTemp = inputValue + Kelvin;
    return convertedTemp;
}

double convertToFahrenheit(double inputValue) {
    double convertedTemp = (inputValue * 9/5) + Fahrenheit;
    return convertedTemp;
}

bool doConversion() {
    double inputValue = getInputValue();

    std::cout << "You entered: " << inputValue << std::endl;

    convertedKelvinTemperature = convertToKelvin(inputValue);
    convertedFahrenheitTemperature = convertToFahrenheit(inputValue);

    std::cout << "Temperature in Kelvin: " << convertedKelvinTemperature << std::endl
       << "Temperature in Fahrenheit: " << convertedFahrenheitTemperature << std::endl;

    std::cout << "Would you like to convert another value? (y/n): ";

    std::string response;

    std::cin >> response;
    while (response != "y"
        && response != "yes"
        && response != "n"
        && response != "no"
    ) {

        std::cout << "Please enter either y or n: ";
        std::cin >> response;
    }

    if (response == "y" || response == "yes") {
        return true;
    }

    if (response == "n" || response == "no") {
        return false;
    }

    return false;
}

int main() {
    bool convert = true;

    while (convert) {
        convert = doConversion();
    }
    return 0;
}