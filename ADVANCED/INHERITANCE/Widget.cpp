#include "Widget.h"
#include <iostream>

Widget::Widget(bool enabled) : enabled{enabled} {

}

void Widget::draw() {
    std::cout << "Is Enabled: " << enabled << std::endl;
}

bool Widget::getEnabled() const {
    return enabled;
}

void Widget::setEnabled(bool enabled) {
    this->enabled = enabled;
}
