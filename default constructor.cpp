#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    int id;
    string name;
public:
    Student() {
        id = 0;
        name = "Tharish reddy";
    }
    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};
int main() {
    Student s;
    s.display();
    return 0;
}
