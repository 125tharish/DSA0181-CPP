#include <iostream>
using namespace std;
class Sample {
    int x;
public:
    Sample(int a) : x(a) {}
    int getX() {
        return x;
    }
};
int main() {
    Sample obj(10);
    cout << "Value of x using getX(): " << obj.getX() << endl;
    int size = sizeof(obj);
    cout << "Size of obj using sizeof: " << size << " bytes" << endl;
    cout << "Accessing main() using scope resolution: ";
    ::main();
    return 0;
}
