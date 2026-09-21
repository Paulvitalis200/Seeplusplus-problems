//  Implement linear search: write int findIndex(int numbers[], int size, int target) 
//  that returns the index of target, or -1 if it isn't there.

#include <iostream>
#include <array>
#include <iterator>

// Write findIndex
// Iterate over array. If found, return i. If not return -1

int findIndex(int numbers[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (numbers[i] == target) return i;
    }
    return -1;
}

int main() {
    int myArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::cout << findIndex(myArray, std::size(myArray), 10);

    return 0;
}