#include <iostream>
using namespace std;
class Rectangle {
private:
    double length;
    double breadth;
public:
    Rectangle(double l, double b) : length(l), breadth(b) {}
    double calculateArea() {
        return length * breadth;
    }
    void displayArea() {
        cout << "Area: " << calculateArea() << endl;
    }
};
int main() {
    Rectangle rect(10.5, 7.3);
    rect.displayArea();
    return 0;
}
