#include <iostream>
using namespace std;
class Sample {
    int x, y, z;
public:
    Sample(int a, int b, int c) : x(a), y(b), z(c) {}
    void operator-() {
        x = -x;
        y = -y;
        z = -z;
    }
    void display() {
        cout << "x: " << x << ", y: " << y << ", z: " << z << endl;
    }
};
int main() {
    Sample obj(10, -20, 30);
    obj.display();
    -obj;
    obj.display();
    return 0;
}
