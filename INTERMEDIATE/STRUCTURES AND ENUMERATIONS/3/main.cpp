// Overload operator== for Book so two books are equal when title 
// and author match. Also overload operator<< so cout << book; works.

#include <iostream>
#include <string>
#include <iomanip>

struct Book {
    std::string title;
    std::string author;
    double price;
    int pageCount = 400;
    bool operator==(const Book& other) const {
        return (title == other.title) && (author == other.author);
    };
    std::string describe() {
        return "Title: " + title
                + ", Author: " + author
                + ", Price: " + std::to_string(price)
                + ", Page Count: " + std::to_string(pageCount);
    };
};

std::ostream& operator<<(std::ostream& os, const Book& book) {
    os << "Author: " << book.author
        << ", Title: " << book.title
        << ", Price: $" << std::fixed << std::setprecision(2) << book.price
        << ", Page Count: " << book.pageCount;
    return os;
}

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

    std::cout << "=================================\n";
    std::cout << (bookOne == bookTwo) << std::endl;
    std::cout << "=================================\n";

    std::cout << bookOne << std::endl;
    return 0;
}