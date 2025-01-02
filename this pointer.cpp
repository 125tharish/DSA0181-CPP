#include <iostream>
using namespace std;

class MyClass {
private:
    int value;
public:
    MyClass(int v) : value(v) {}

    MyClass& setValue(int v) {
        this->value = v;
        return *this;
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    MyClass obj(10);
    obj.display();
    obj.setValue(20).display();
    return 0;
}
