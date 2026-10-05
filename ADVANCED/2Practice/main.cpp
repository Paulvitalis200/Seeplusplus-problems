#include <iostream>
#include "Length.h"

int main() {
    Length length1{20};
    Length length2{30};

    std::cout << "Equal: "  << std::boolalpha << (length1 == length2) << std::endl;
    // std::cout << "Less than or equal: " << std::boolalpha << (length1 <= length2) << std::endl;
    // std::cout << "Greater than or equal: " << std::boolalpha << (length1 >= length2) << std::endl;
    // std::cout << "Less than: " << std::boolalpha << (length1 < length2) << std::endl;
    // std::cout << "Greater than: " << std::boolalpha << (length1 > length2) << std::endl;
    std::cout << (length1 + length2).getValue() << std::endl;
    std::cout << length1.getValue() << std::endl;
    return 0;
}