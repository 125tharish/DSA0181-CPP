#include <iostream>
using namespace std;

class Shape {
public:
    virtual double calculateArea() = 0;
};

class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double calculateArea() override {
        return length * width;
    }
};

class Triangle : public Shape {
private:
    double base, height;
public:
    Triangle(double b, double h) : base(b), height(h) {}
    double calculateArea() override {
        return 0.5 * base * height;
    }
};

int main() {
    Shape* shape1 = new Rectangle(5, 4);
    Shape* shape2 = new Triangle(6, 3);

    cout << "Rectangle Area: " << shape1->calculateArea() << endl;
    cout << "Triangle Area: " << shape2->calculateArea() << endl;

    delete shape1;
    delete shape2;

    return 0;
}
