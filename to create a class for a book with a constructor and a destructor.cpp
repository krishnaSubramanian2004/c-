#include <iostream>
#include <string>
using namespace std;
class Book {
private:
    string title;
    string author;

public:
    // Constructor
    Book(const string& bookTitle, const string& bookAuthor) 
        : title(bookTitle), author(bookAuthor) {
        cout << "A new book titled '" << title << "' by " << author << " has been created." << endl;
    }

    // Destructor
    ~Book() {
        cout << "The book titled '" << title << "' by " << author << " has been destroyed." << endl;
    }
};

int main() {
    // Creating an object of Book class
    Book myBook("The Great Gatsby", "F. Scott Fitzgerald");

    // The destructor will be called automatically when myBook goes out of scope
    return 0;
}

