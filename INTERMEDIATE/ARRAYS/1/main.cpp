// Declare an array of 6 integers. Print its size using std::size(), 
// then print every element with a range-based for loop and again with an index-based for loop.

#include <iostream>
#include <iterator>

int main() {

    int sixesArray[6] = {0, 1, 2, 3, 4, 5};

    std::cout << "Size: " << std::size(sixesArray) << std::endl;

    for (int i: sixesArray) {
        std::cout << i << std::endl;
    }

    for (int i=0; i < std::size(sixesArray); i++) {
        std::cout << sixesArray[i] << std::endl;
    }
    return 0;
}