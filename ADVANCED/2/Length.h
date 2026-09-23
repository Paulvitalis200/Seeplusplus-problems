//
// Created by Admin on 23/09/2026.
//

#ifndef SEEPLUSPLUS_PROBLEMS_LENGTH_H
#define SEEPLUSPLUS_PROBLEMS_LENGTH_H

#include <iostream>
#include <compare>

class Length {
public:
    Length(int value);
    bool operator==(const Length& other) const;
    std::strong_ordering operator<=>(const Length& other) const;
    int getLength() const;
private:
    int value;
};


#endif //SEEPLUSPLUS_PROBLEMS_LENGTH_H