// Write a function that copies one array into another, element by element.
// Prove that arr2 = arr1; doesn't compile by leaving it in as a commented-out line.

#include <iostream>
#include <iterator>

void copy(int array1[], int array2[], int size);

int main() {
    int firstArray[] = {1,2,3,4,5,6};
    int secondArray[std::size(firstArray)] = {};
    
    copy(firstArray, secondArray, std::size(firstArray));

    for (int i : secondArray) {
        std::cout << i << std::endl;
    }
    std::cout << firstArray << std::endl;
    return 0;
}

void copy(int array1[], int array2[], int size) {
    for (int i=0; i < size; i++) {
        array2[i] = array1[i];
    }
}