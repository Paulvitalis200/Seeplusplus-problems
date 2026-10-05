#include <iostream>
#include "Length.h"

int main() {
    try {
        Length length{10};
        Length length2{20};
        Length length3{20};
        Length length4{45};

        // std::cout << std::boolalpha << (length2 == length3) << std::endl;

        std::cout << length.getLength() << std::endl;
        std::cout << (length2 < length4) << std::endl;
        std::cout << (length + length2).getLength() << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cout << e.what() << std::endl;
    }
    
    return 0;
}