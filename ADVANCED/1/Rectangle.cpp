//
// Created by Admin on 23/09/2026.
//

#include "Rectangle.h"
#include <iostream>
#include <stdexcept>
#include <string>

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

void Rectangle::setWidth(int width) {
    if (width < 0) {
        throw std::invalid_argument("Width cannot be less than 0");
    }
    this->width = width;
}

void Rectangle::setHeight(int height) {
    if (height < 0) {
        throw std::invalid_argument("Height cannot be less than 0");
    }
    this->height = height;
}

int Rectangle::getWidth() const {
    return width;
}

int Rectangle::getHeight() const {
    return height;
}

Rectangle::Rectangle(int width, int height, std::string colour) : Rectangle(width, height) {
    this->colour = colour;
}

void Rectangle::setColour(std::string colour) {
    this->colour = colour;
}

std::string Rectangle::getColour() const {
    return colour;
}
