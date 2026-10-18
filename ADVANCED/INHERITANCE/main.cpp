// Create a base class Widget with a bool enabled and a draw() method, and a derived TextBox : public Widget 
// that adds a string value. Call the base constructor from the derived one.

#include <iostream>
#include "Textbox.h"
#include "Widget.h"

int main() {
    Textbox firstTextbox{true, "Good"};
    firstTextbox.setEnabled(false);

    // firstTextbox.draw();

    Widget* widget1 = &firstTextbox;

    widget1->draw(); // Expect it to show widgets draw value if widget draw was not called with a virtual

    // std::cout << firstTextbox.checkReachable() << std::endl;
    return 0;
}