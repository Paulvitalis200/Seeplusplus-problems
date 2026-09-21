// Write a function int sum(int numbers[], int size) that returns the sum of an array.
// Call it from main. Then explain in a comment why you can't just use std::size() inside the function.

#include <iostream>
#include <iterator>

int sum(int numbers[], int size) {
    int currentSum = 0;

    // We can't just use std::size() because the numbers int array passed decays into a pointer. We can't do std::size(numbers)
    for (int i = 0; i < size; i++) {
        currentSum += numbers[i]; // Same as *(numbers + i)
    }
    return currentSum;
}

int main() {
    int numbers[] = {10, 20, 30, 40, 50};

    int result = sum(numbers, std::size(numbers));

    std::cout << result << std::endl;
    
    return 0;
}