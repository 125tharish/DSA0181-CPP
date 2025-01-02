#include <iostream>
#include <cmath>
class Shape {
protected:
    double radius;
public:
    Shape(double r) : radius(r) {}
    virtual double area() const {
        return 0.0;
    }
};
class Circle : public Shape {
public:
    Circle(double r) : Shape(r) {}
    double area() const override {
        return M_PI * radius * radius;
    }
};
int main() {
    double r;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> r;
    Circle circle(r);
    std::cout << "The area of the circle is: " << circle.area() << std::endl;
    return 0;
}
