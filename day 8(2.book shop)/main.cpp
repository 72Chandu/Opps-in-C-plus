/*a book shop maintain the inventory of books that are begin sold at the shop. the list include details such as author , title,price,publisher,
and stock postion whenever a customber wat a books, the sale person inputs the title and author and the system searches the list and displays 
whether it is avialable or not if it is not, ans appropriate message is displayed if it is , then the system displays the book details and 
request for the number of copies required if the requested copies are avialable , the total cost of the requested copies is displayed othewise
the message "Required copies not in stock " is displays desine a system using a class books with suitable member function and constructor .
use new operator in constructing the allocated memory space Required*/
#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string author;
    string title;
    float price;
    string publisher;
    int stock_position;

public:
    // Constructor
    Book(string author, string title, float price, string publisher, int stock_position) {
        this->author = author;
        this->title = title;
        this->price = price;
        this->publisher = publisher;
        this->stock_position = stock_position;
    }

    // Function to check availability and process sale
    void process_sale(string title, string author, int num_copies) {
        if (title == this->title && author == this->author) {
            if (num_copies <= stock_position) {
                float total_cost = price * num_copies;
                cout << "Book details:\n";
                cout << "Author: " << author << endl;
                cout << "Title: " << title << endl;
                cout << "Price: $" << price << endl;
                cout << "Publisher: " << publisher << endl;
                cout << "Number of copies available: " << stock_position << endl;
                cout << "Number of copies requested: " << num_copies << endl;
                cout << "Total cost: $" << total_cost << endl;
                stock_position -= num_copies; // Update stock position
            } else {
                cout << "Required copies not in stock." << endl;
            }
        } else {
            cout << "Book not found." << endl;
        }
    }
};

int main() {
    // Creating book objects dynamically
    Book *book1 = new Book("Author1", "Title1", 20.0, "Publisher1", 5);
    Book *book2 = new Book("Author2", "Title2", 15.0, "Publisher2", 10);

    // Input from the sales person
    string title, author;
    int num_copies;

    // Assuming the sales person inputs the title and author
    title = "Title1";
    author = "Author1";

    // Process sale for book1
    cout << "Searching for book: " << title << " by " << author << endl;
    book1->process_sale(title, author, 3); // Requesting 3 copies

    // Process sale for book2
    title = "Title2";
    author = "Author2";
    cout << "\nSearching for book: " << title << " by " << author << endl;
    book2->process_sale(title, author, 15); // Requesting 15 copies, which is more than in stock

    // Freeing dynamically allocated memory
    delete book1;
    delete book2;

    return 0;
}
