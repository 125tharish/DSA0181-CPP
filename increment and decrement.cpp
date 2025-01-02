#include <iostream>
using namespace std;
class Counter {
    int count;
public:
    Counter(int c = 0) : count(c) {}
    Counter& operator++() {
        ++count;
        return *this;
    }
    Counter operator++(int) {
        Counter temp = *this;
        count++;
        return temp;
    }
    void display() {
        cout << "Count: " << count << endl;
    }
};
int main() {
    Counter c1(5), c2(10);
    ++c1;
    c1.display();
    c2++;
    c2.display();
    return 0;
}