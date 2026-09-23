//
// Created by Admin on 23/09/2026.
//

#ifndef SEEPLUSPLUS_PROBLEMS_RECTANGLE_H
#define SEEPLUSPLUS_PROBLEMS_RECTANGLE_H

class Rectangle {
public:
    Rectangle(int width, int height);
    int getArea();
    void draw();
private:
    int width;
    int height;
};


#endif //SEEPLUSPLUS_PROBLEMS_RECTANGLE_H