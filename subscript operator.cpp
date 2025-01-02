#include <iostream>
using namespace std;
class CustomArray {
private:
    int* arr;
    int size;
public:
    CustomArray(int s) {
        size = s;
        arr = new int[size];
    }
    ~CustomArray() {
        delete[] arr;
    }
    int& operator[](int index) {
        if (index >= 0 && index < size) {
            return arr[index];
        } else {
            cout << "Index out of bounds!" << endl;
            exit(1);
        }
    }
    int getSize() {
        return size;
    }
};
int main() {
    CustomArray arr(5);  
    for (int i = 0; i < arr.getSize(); i++) {
        arr[i] = i * 10;
    }
    for (int i = 0; i < arr.getSize(); i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
