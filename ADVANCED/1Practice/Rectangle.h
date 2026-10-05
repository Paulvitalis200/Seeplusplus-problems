// Create a Rectangle class in Rectangle.h / Rectangle.cpp with private width and height,
//  a public getArea(), and a draw() that prints something. Instantiate it from main.

#ifndef RECTANGLE_HEADER_H
#define RECTANGLE_HEADER_H

#include <iostream>
#include <string>

class Rectangle {
public:
    Rectangle() = default;
    Rectangle(int width, int height);
    Rectangle(int width, int height, const std::string& colour);
    void draw();
    int getWidth() const;
    int getHeight() const;
    std::string getColour() const;
    int getArea() const;
    void setHeight(int height);
    void setWidth(int width);
    void setColor(const std::string& colour);
private:
    int width;
    int height;
    std::string colour;
};

#endif