#include "Textbox.h"
#include <iostream>

Textbox::Textbox(bool enabled, const std::string& value) : Widget(enabled), value{value} {
    this->isReachable = false;
}

void Textbox::setValue(const std::string& value) {
    this->value = value;
}

std::string Textbox::getValue() {
    return value;
}

bool Textbox::checkReachable() {
    return isReachable;
}

void Textbox::draw() {
    std::cout << "This is Textbox draw: " << value << std::endl;
}