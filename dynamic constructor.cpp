#include <iostream>
#include <cstring>
using namespace std;
class String {
private:
    char* str;
public:
    String(const char* s) {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }
    ~String() {
        delete[] str;
    }
    void display() {
        cout << "String: " << str << endl;
    }
};
int main() {
    String s1("Hello, how are you!");
    s1.display();
    return 0;
}
