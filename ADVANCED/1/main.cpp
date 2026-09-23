// Create a Rectangle class in Rectangle.h / Rectangle.cpp
// with private width and height, a public getArea(), and
// a draw() that prints something. Instantiate it from main.

#include <iostream>
#include "Rectangle.h"

int main() {

    try {
        Rectangle rectangle1{10,3};
        Rectangle rectangle2{0, 0};
        Rectangle rectangle3{90, 193, "Red"};

        std::cout << rectangle1.getArea() << std::endl;
        rectangle1.draw();

        rectangle2.setWidth(15);
        rectangle2.setHeight(20);

        std::cout << rectangle2.getArea() << std::endl;
        std::cout << rectangle3.getColour() << std::endl;

    } catch (const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}