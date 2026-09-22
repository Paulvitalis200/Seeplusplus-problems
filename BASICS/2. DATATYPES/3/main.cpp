// Declare an int holding the value 255. Print it, then print two other variables
//  initialised to the same value using binary and hexadecimal literals, to confirm they're all equal.
#include <iostream>

int main() {
    int value = 255;

    std::cout << "Value: " << value << std::endl;

    int binaryValue = 0b11111111;
    int hexadecimalValue = 0xFF;

    std::cout << "Binary Value: " << binaryValue << std::endl;
    std::cout << "HexaDecimal Value: " << hexadecimalValue << std::endl;

    return 0;
}