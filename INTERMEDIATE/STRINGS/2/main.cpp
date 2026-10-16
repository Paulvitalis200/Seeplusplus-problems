// Copy one C-string into another with strcpy() and compare two C-strings with strcmp().
// Then show the equivalent operations with std::string and note how much shorter it is.

#include <iostream>
#include <cstring>
#include <string>

int main() {

    char string1[] = "Suckaaa";
    char string2[10];

    std::string string3 = "Paul";
    std::string string4;

    strcpy(string2, string1);

    string4 = string3;

    std::cout << "String 1: " << string1 << std::endl;
    std::cout << "String 2: " << string2 << std::endl;
    std::cout << strcmp(string2, string1) << std::endl;
    std::cout << "String 3: " << string3 << std::endl;
    std::cout << "String 4: " << string4 << std::endl;
    std::cout << (string3 == string4) << std::endl;
    return 0;
}