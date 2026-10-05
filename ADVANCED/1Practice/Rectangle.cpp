#include "Rectangle.h"
#include <stdexcept>
#include <iostream>


// Member initializer lists are preferred over body assignment because they
// directly initialize members when they are constructed, rather than
// default-constructing them first and then assigning — which is redundant
// and can be costly for complex types (e.g. std::string). For const or
// reference members, an initializer list is the ONLY option.
Rectangle::Rectangle(int width, int height) : 
            width(width < 0 ? throw std::invalid_argument("Width can't be less than 0") : width),
            height(height < 0 ? throw std::invalid_argument("Height can't be less than 0") : height) {

}




Rectangle::Rectangle(int width, int height, const std::string& colour) : Rectangle(width, height) {
    this->colour = colour;
}

void Rectangle::setHeight(int height) {
    if (height < 0) {
        throw std::invalid_argument("Height cannot be less than 0");
    }
    this->height = height;
}

void Rectangle::setWidth(int width) {
    if (width < 0) {
        throw std::invalid_argument("Width cannot be less than 0");
    }
    this->width = width;
}

int Rectangle::getWidth() const {
    return width;
}

int Rectangle::getHeight() const {
    return height;
}

int Rectangle::getArea() const {
    return width * height;
}

std::string Rectangle::getColour() const {
    return colour;
}

void Rectangle::setColor(const std::string& colour) {
    this->colour = colour;
}

void Rectangle::draw() {
    std::cout << "Height: " << height << std::endl
            << "Width: " << width << std::endl
            << "Area: " << getArea() << std::endl
            << "Color: " << getColour() << std::endl;
}