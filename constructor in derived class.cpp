#include <iostream>
using namespace std;
class Base {
public:
    Base() {
        cout << "Base class constructor invoked." << endl;
    }
};
class Derived : public Base {
public:
    Derived() {
        cout << "Derived class constructor invoked." << endl;
    }
};
int main() {
    Derived obj;
    return 0;
}
