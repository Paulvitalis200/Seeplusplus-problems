// Write a program that prints the minimum and maximum values of int, short, and long on your machine.

#include <iostream>
#include <limits>

int main() {
    std::cout << "Int max: " << std::numeric_limits<int>::max() << std::endl;
    std::cout << "Int min: " << std::numeric_limits<int>::min() << std::endl;
    std::cout << "-----------------------------------" << std::endl;
    std::cout << "Short max: " << std::numeric_limits<short>::max() << std::endl;
    std::cout << "Short min: " << std::numeric_limits<short>::min() << std::endl;
    std::cout << "-----------------------------------" << std::endl;
    std::cout << "Long max: " << std::numeric_limits<long>::max() << std::endl;
    std::cout << "Long min: " << std::numeric_limits<long>::min() << std::endl;
    std::cout << "-----------------------------------" << std::endl;
    return 0;
}