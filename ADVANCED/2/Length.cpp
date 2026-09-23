//
// Created by Admin on 23/09/2026.
//

#include "Length.h"
#include <stdexcept>

Length::Length(int value) {
    if (value < 0) {
        throw std::invalid_argument("Value cannot be less than 0");
    }
    this->value = value;
}

int Length::getLength() const {
    return value;
}

bool Length::operator==(const Length& other) const {
    return value == other.value;
}

std::strong_ordering Length::operator<=>(const Length& other) const {
    return value <=> other.value;
}