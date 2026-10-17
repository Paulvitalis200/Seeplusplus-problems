// Define a struct Book with a title, author, page count, and price. 
// Create two instances, one with an initialiser list and one by 
// assigning members individually, and print both.


#include <iostream>
#include <string>

struct Book {
    std::string title;
    std::string author;
    double price;
    int pageCount;
};

int main() {
    Book bookOne {
        .title = "Harry Potter and the Deathly Hallows",
        .author = "JK. Rowling",
        .pageCount = 1400,
        .price = 10.85
    };

    Book bookTwo;

    bookTwo.title = "Wonder woman";
    bookTwo.author = "Zack Snyder";
    bookTwo.pageCount = 1400;
    bookTwo.price = 3.54;

    std::cout << "Book: " << bookOne.title << "\n"
            << "Author: " << bookOne.author << "\n"
            << "Page Count: " << bookOne.pageCount << "\n"
            << "Price: " << bookOne.price << "\n"
            << "Book: " << bookTwo.title << "\n"
            << "Author: " << bookTwo.author << "\n"
            << "Page Count: " << bookTwo.pageCount << "\n"
            << "Price: " << bookTwo.price << "\n";
    return 0;
}