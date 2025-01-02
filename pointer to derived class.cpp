#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show function." << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class show function." << endl;
    }
};

int main() {
    Base* ptr;
    Derived obj;
    
    ptr = &obj;
    ptr->show();
    
    return 0;
}
