//
// Created by Admin on 23/09/2026.
//

#ifndef SEEPLUSPLUS_PROBLEMS_RECTANGLE_H
#define SEEPLUSPLUS_PROBLEMS_RECTANGLE_H

#include <string>

class Rectangle {
public:
    Rectangle() = default;
    Rectangle(int width, int height);
    Rectangle(int width, int height, std::string colour);
    int getArea();
    void draw();
    int getWidth() const;
    int getHeight() const;
    std::string getColour() const;
    void setWidth(int width);
    void setHeight(int height);
    void setColour(std::string colour);
private:
    int width;
    int height;
    std::string colour;
};


#endif //SEEPLUSPLUS_PROBLEMS_RECTANGLE_H