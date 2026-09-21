
// Declare an array of 6 integers. Print its size using std::size(),
// then print every element with a range-based for loop and again 
// with an index-based for loop.

#include <iostream>
#include <iterator>

// Running the app: g++ -std=c++17 -o main main.cpp

int main() {
    int myArray[6] = {1, 2, 3, 4, 5, 6};

    std::cout << "Size: " << std::size(myArray) << std::endl;

    std::cout << "--------------------------\n" << std::endl;
    // Range based for loop. for (auto i: myArray) { cout << Blah Blah}

    for (int i: myArray) {
        std::cout << i << std::endl;
    }

    std::cout << "--------------------------\n" << std::endl;
    // Index-based for loop
    for (int i = 0; i < std::size(myArray); i++) {
        std::cout << myArray[i] << std::endl;
    }
    return 0;
}