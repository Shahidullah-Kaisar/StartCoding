#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
    int availableCopies;
};

int main() {
    Book b1;
    b1.title = "C++ Programming";
    b1.author = "Bjarne Stroustrup";
    b1.availableCopies = -5;   // ❌ Invalid, should not allow
    cout << "Book: " << b1.title << ", Copies: " << b1.availableCopies << endl;

    return 0;
}

/*
❗ Problems

availableCopies is public → anyone can set negative copies
No methods to borrow or return a book
No control over availability → breaks encapsulation

🎯 Your Task

Fix this using encapsulation:
Make all properties private (title, author, availableCopies)
Provide getter and setter for title and author (optional validation)

Provide methods:

borrowBook() → decreases availableCopies if >0, otherwise show error
returnBook() → increases availableCopies
Prevent negative availableCopies
*/