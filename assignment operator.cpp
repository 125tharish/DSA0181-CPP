#include <iostream>
#include <cstring>
using namespace std;
class String {
    char* str;
public:
    String(const char* s) {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }
    String(const String& other) {
        str = new char[strlen(other.str) + 1];
        strcpy(str, other.str);
    }
    String& operator=(const String& other) {
        if (this != &other) {
            delete[] str;
            str = new char[strlen(other.str) + 1];
            strcpy(str, other.str);
        }
        return *this;
    }
    void display() {
        cout << str << endl;
    }
    ~String() {
        delete[] str;
    }
};
int main() {
    String s1("Hello");
    String s2("World");
    s1.display();
    s2.display();
    s2 = s1;
    s2.display();
    return 0;
}
