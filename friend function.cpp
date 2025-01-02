#include <iostream>
using namespace std;
class Person {
    string name;
    int age;
public:
    Person(string n, int a) : name(n), age(a) {}
    friend ostream& operator<<(ostream& out, const Person& p);
};
ostream& operator<<(ostream& out, const Person& p) {
    out << "Name: " << p.name << ", Age: " << p.age;
    return out;
}
int main() {
    Person p("Alice", 30);
    cout << p << endl;
    return 0;
}
