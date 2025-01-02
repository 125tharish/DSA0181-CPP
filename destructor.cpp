#include <iostream>
class Example {
private:
    int* data;
public:
    Example(int value) {
        data = new int;
        *data = value;
        std::cout << "Constructor: Allocated memory for data and initialized with value " << *data << std::endl;
    }
    ~Example() {
        delete data;
        std::cout << "Destructor: Released dynamically allocated memory for data" << std::endl;
    }
    void display() {
        std::cout << "Data value: " << *data << std::endl;
    }
};
int main() {
    Example obj(42);
    obj.display();
    return 0;
}
