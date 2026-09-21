

// Write a function bool areEqual(int a[], int b[], int size)
// that compares two arrays element by element and returns 
// whether they hold the same values.

#include <iostream>
#include <iterator>
#include <array>

// Create two arrays
// Pass them to the bool function with the size of array a
// If size of array a != size of array b, return false
// Iterate over array a, and check if value at i of a is the same as value at i of b
// If any is not equal, early return False
// Return True

bool areEqual(int a[], int b[], int size) {
    for (int i = 0; i < size; i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int a[5] = {20, 10, 30, 40, 70};
    int b[5] = {20, 12, 30, 40, 70};

    std::cout << "Are equal: " << std::boolalpha << areEqual(a, b, std::size(a)) << std::endl;
    return 0;
}