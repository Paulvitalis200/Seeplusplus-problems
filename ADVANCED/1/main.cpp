// Create a Rectangle class in Rectangle.h / Rectangle.cpp
// with private width and height, a public getArea(), and
// a draw() that prints something. Instantiate it from main.

#include <iostream>
#include "Rectangle.h"

int main() {

    try {
        Rectangle rectangle1{10,3};

        std::cout << rectangle1.getArea() << std::endl;
        rectangle1.draw();
    } catch (const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}