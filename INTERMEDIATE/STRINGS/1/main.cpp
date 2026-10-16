

// Declare a C-string holding your name. 
// Print its length with strlen() and its size with sizeof(). Explain the difference in a comment.

#include <iostream>
#include  <cstring>

int main() {

    char myName[] = "Big Shit";
    std::cout << myName << std::endl;
    std::cout << "Str Len result: " << strlen(myName) << std::endl;
    std::cout << "Size of result: " << sizeof(myName) << std::endl;

    // Difference: Str len prints the actual length of the string. Size of returns the size of the allocated memory
}