// Read a full line of input (including spaces) into a std::string
// and print it back with the number of characters it contains.

#include <iostream>
#include <string>

int main() {
    std::string myInput;

    std::cout << "Give me a sentence: ";
    std::getline(std::cin, myInput);


    std::cout << "You entered: " << myInput << std::endl;
    std::cout << "Number of characters: " << myInput.size() << std::endl;

    return 0;
}