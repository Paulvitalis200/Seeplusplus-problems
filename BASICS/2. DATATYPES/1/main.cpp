// Declare one variable of each of these types with a sensible initial value:
//  int, long, float, double, char, bool, string. Print each one along with its size in bytes.

#include <iostream>
#include <string>

int main() {
    short shortNumber = 2;
    int smallNumber = 8;
    long longNumber = 30000000000;
    float floatNumber = 23.34;
    double doubleNumber = 23.448998343;
    char charValue = 'A';
    std::string stringValue = "Paul";

    std::cout << "Short: " << shortNumber << " Size: " << sizeof(shortNumber) << std::endl;
    std::cout << "Int: " << smallNumber << " Size: " << sizeof(smallNumber) << std::endl;
    std::cout << "Long: " << longNumber << " Size: " << sizeof(longNumber) << std::endl;
    std::cout << "Float: " << floatNumber << " Size: " << sizeof(floatNumber) << std::endl;
    std::cout << "Double: " << doubleNumber << " Size: " << sizeof(doubleNumber) << std::endl;
    std::cout << "Char: " << charValue << " Size: " << sizeof(charValue) << std::endl;
    std::cout << "String: " << stringValue << " Size: " << sizeof(stringValue) << std::endl;

    return 0;
}