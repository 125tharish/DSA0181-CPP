#include <iostream>
using namespace std;
class Circle {
private:
    double radius;
public:
    Circle() : radius(1.0) {}
    Circle(double r) : radius(r) {}
    double calculateArea() {
        return 3.14159 * radius * radius;
    }
    void displayArea() {
        cout << "Area: " << calculateArea() << endl;
    }
};
int main() {
    Circle c1;
    Circle c2(4.5);
    c1.displayArea();
    c2.displayArea();
    return 0;
}
