//
// Created by Admin on 23/09/2026.
//

#include "Rectangle.h"
#include <iostream>
#include <stdexcept>

Rectangle::Rectangle(int width, int height) {
    if (width < 0 || height < 0) {
        throw std::invalid_argument("Width and height need to be greater than 0");
    }
    this->width = width;
    this->height = height;
}

int Rectangle::getArea() {
    return width * height;
}

void Rectangle::draw() {
    std::cout << "Height: " << height << std::endl
            << "Width: " << width << std::endl
            << "Area: " << getArea() << std::endl;
}