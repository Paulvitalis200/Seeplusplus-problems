// Add a method to Book called describe() that prints a one-line summary.
//  Also give one member a default value in the struct definition and show that it takes effect.

#include <iostream>
#include <string>
#include <iomanip>

struct Book {
    std::string title;
    std::string author;
    double price;
    int pageCount = 400;
    std::string describe() {
        return "Title: " + title
                + ", Author: " + author
                + ", Price: " + std::to_string(price)
                + ", Page Count: " + std::to_string(pageCount);
    };
};

int main() {
    Book bookOne {
        .title = "Harry Potter and the Deathly Hallows",
        .author = "JK. Rowling",
        .price = 34.45
    };

    Book bookTwo;

    bookTwo.title = "Wonder woman";
    bookTwo.author = "Zack Snyder";
    bookTwo.pageCount = 1400;
    bookTwo.price = 3.54;

    std::cout << "Book: " << bookOne.title << "\n"
            << "Author: " << bookOne.author << "\n"
            << "Page Count: " << bookOne.pageCount << "\n"
            << "Price: " << std::fixed << std::setprecision(2) << bookOne.price << "\n"
            << "Summary: " << bookOne.describe() << "\n"
            << "----------------------------------\n"
            << "Book: " << bookTwo.title << "\n"
            << "Author: " << bookTwo.author << "\n"
            << "Page Count: " << bookTwo.pageCount << "\n"
            << "Price: " << std::fixed << std::setprecision(2) << bookTwo.price << "\n"
             << "Summary: " << bookTwo.describe() << "\n";
    return 0;
}