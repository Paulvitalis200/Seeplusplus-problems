#ifndef TEXTBOX_H_CLASS
#define TEXTBOX_H_CLASS

#include "Widget.h"
#include <string>

class Textbox : public Widget {
public:
    Textbox(bool enabled, const std::string& value);
    void setValue(const std::string& value);
    std::string getValue();
    bool checkReachable();
    void draw() override;
private:
    std::string value;
};

#endif