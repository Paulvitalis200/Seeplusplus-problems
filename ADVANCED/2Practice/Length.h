#ifndef LENGTH_HEADER_H
#define LENGTH_HEADER_H

#include <compare>

class Length {
public:
    Length(int value);
    void setValue(int value);
    int getValue() const;
    bool operator==(const Length& other) const;
    Length& operator+=(const Length& other);
    Length operator+(const Length& other) const;
    std::strong_ordering operator<=>(const Length& other) const;
private:
    int value;
};

#endif