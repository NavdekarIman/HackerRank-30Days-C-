#include <iostream>
#include <string>
using namespace std;

class Book {
protected:
    string title;
    string author;

public:
    Book(string t, string a) {
        title = t;
        author = a;
    }

    virtual void display() = 0;
};

// MyBook class inherits from Book
class MyBook : public Book {
private:
    int price;

public:
    // Parameterized constructor taking title, author, and price
    MyBook(string t, string a, int p) : Book(t, a), price(p) {}

    // Implementing the display method as required
    void display() override {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    string title, author;
    int price;
    getline(cin, title);
    getline(cin, author);
    cin >> price;

    MyBook novel(title, author, price);
    novel.display();

    return 0;
}
