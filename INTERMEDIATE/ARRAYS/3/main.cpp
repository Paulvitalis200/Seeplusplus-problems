// Write a function that copies one array into another, element by element.
// Prove that arr2 = arr1; doesn't compile by leaving it in as a commented-out line.

#include <iostream>
#include <array>
#include <iterator>

// Define two arrays. One with values, one with none
// Pass them into function
// Iterate over array that has value and set value of the second array to the value of the first array

void copyArr(int arr1[], int arr2[], int size) {
    for (int i = 0; i < size; i++) {
        arr2[i] = arr1[i];
    }
}

int main() {
    int arr1[] = {10, 20, 30, 40};
    int arr2[4] = {};

    // arr1 = arr2 - Won't compile. We have to copy the value one by one

    copyArr(arr1, arr2, std::size(arr1));

    for (int i = 0; i < std::size(arr2); i++) {
        std::cout << arr2[i] << std::endl;
    }

    return 0;
}