#include <iostream>
#include <string>
using namespace std;

class LibraryBook {
private:
    int bookId;
    string bookTitle;
    string bookAuthor;
    float bookPrice;

    static int totalBooks;

public:

    // Parameterized constructor
    LibraryBook(int id = 0, string title = "Unknown",
                string author = "Unknown", float price = 0.0) {

        bookId = id;
        bookTitle = title;
        bookAuthor = author;
        bookPrice = price;

        totalBooks++;

        cout << "\nBook created. Total books: "
             << totalBooks << endl;
    }

    // Copy constructor
    LibraryBook(const LibraryBook &b) {
        bookId = b.bookId;
        bookTitle = b.bookTitle;
        bookAuthor = b.bookAuthor;
        bookPrice = b.bookPrice;

        totalBooks++;

        cout << "Book copied. Total books: "
             << totalBooks << endl;
    }

    // Destructor
    ~LibraryBook() {
        totalBooks--;

        cout << "Book destroyed. Total books: "
             << totalBooks << endl;
    }

    // Display details
    void showBook() const {
        cout << "\nBook ID: " << bookId << endl;
        cout << "Title: " << bookTitle << endl;
        cout << "Author: " << bookAuthor << endl;
        cout << "Price: " << bookPrice << endl;
    }

    static int getTotalBooks() {
        return totalBooks;
    }
};

int LibraryBook::totalBooks = 0;

int main() {

    int id;
    string title, author;
    float price;

    cout << "Enter Book ID: ";
    cin >> id;

    cin.ignore();

    cout << "Enter Book Title: ";
    getline(cin, title);

    cout << "Enter Author Name: ";
    getline(cin, author);

    cout << "Enter Book Price: ";
    cin >> price;

    // Create first object using parameterized constructor
    LibraryBook book1(id, title, author, price);

    book1.showBook();

    // Create second object using copy constructor
    cout << "\nCreating a copy of the book..." << endl;

    LibraryBook book2(book1);

    book2.showBook();

    cout << "\nTotal books currently: "
         << LibraryBook::getTotalBooks() << endl;

    return 0;
}