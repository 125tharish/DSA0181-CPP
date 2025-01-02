#include <iostream>
#include <string>
using namespace std;
class Book {
private:
    string title;
    string author;
    double price;
public:
    Book(string t, string a, double p) : title(t), author(a), price(p) {}
    Book(const Book& b) : title(b.title), author(b.author), price(b.price) {}
    void displayDetails() {
        cout << "Title: " << title << ", Author: " << author << ", Price: " << price << endl;
    }
};
int main() {
    Book book1("1984", "George Orwell", 19.99);
    Book book2 = book1;
    book1.displayDetails();
    book2.displayDetails();
    return 0;
}
