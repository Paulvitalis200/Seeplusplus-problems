// Write a function string reverse(string text) that
// returns the reversed string, without using library reverse functions.

#include <iostream>
#include <string>

std::string reverse(const std::string& text);

int main() {
    std::string string1 = "Paul";
    
    std::cout << reverse(string1) << std::endl;
    return 0;
}

std::string reverse(const std::string& text) {
    std::string outputString;
    outputString.reserve(text.length());

    for (size_t i=text.length(); i > 0; i--) {
        outputString += text[i - 1];
    }

    return outputString;
}