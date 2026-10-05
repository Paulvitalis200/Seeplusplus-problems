#include "Length.h"
#include <stdexcept>
#include <iostream>

Length::Length(int value) :
        value(value < 0 ? throw std::invalid_argument("Value cannot be less than 0") : value) {

}

int Length::getValue() const {
    return value;
}

void Length::setValue(int value) {
    if (value < 0) {
        throw std::invalid_argument("Value can't be less than 0");
    }
    this->value = value;
    
}

bool Length::operator==(const Length& other) const {
    return value == other.value;
}


std::strong_ordering Length::operator<=>(const Length& other) const {
    return value <=> other.value;
}

// operator+= is implemented first because it's the "real" mutating logic.
// operator+ is then implemented in terms of +=: make a copy, apply +=, return it.
// This avoids duplicating logic and is the standard convention (Scott Meyers,
// "Effective C++"). If you later change how addition works, you only update +=.
Length& Length::operator+=(const Length& other) {
    value += other.value;
    return *this;
}

Length Length::operator+(const Length& other) const {
    Length result = *this;   // copy of the left-hand side
    result += other;         // reuse += logic
    return result;
}