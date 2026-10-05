//  Declare an int, a pointer to it, and print: the value, the address, the pointer's own value,
//  and the dereferenced pointer. Then modify the variable through the pointer and print it again.

#include <iostream>

int main() {
    int myNumber = 10;
    int* numPointer = &myNumber;

    std::cout << "Value: " << myNumber << std::endl;
    std::cout << "Address: " << &myNumber << std::endl;
    std::cout << "Pointer value: " << numPointer << std::endl;
    std::cout << "Dereferenced pointer: " << *numPointer << std::endl;

    *numPointer = 20;

    std::cout << "Modified value: " << myNumber << std::endl;
    return 0;
}