// Write a function int sum(int numbers[], int size) that returns the sum of an array.
//  Call it from main. Then explain in a comment why you can't just use std::size() inside the function.

#include <iostream>
#include <iterator>

int sum(int numbers[], int size);

int main() {
    int numbers[] = {1,2,3,4,5,6,7,8,9,10};

    std::cout << sum(numbers, std::size(numbers)) << std::endl;
    return 0;
}

int sum(int numbers[], int size) {
    // We can't call size() directly on numbers because numbers is a pointer when passed into a function
    int currentSum = 0;
    for (int i = 0; i < size; i++) {
        currentSum += numbers[i];
    }
    return currentSum;
}