#include <iostream>
using namespace std;
void rotateArrayLeft(int arr[], int size, int k) {
    k = k % size;
    for (int i = 0; i < k; i++) {
        int temp = arr[0];
        for (int j = 0; j < size - 1; j++) {
            arr[j] = arr[j + 1];
        }
        arr[size - 1] = temp;
    }
}
int main() {
    int size, k;
    cout << "Enter the size of the array: ";
    cin >> size;
    if (size <= 0) {
        cout << "Array size must be greater than 0." << endl;
        return 1;
    }
    int arr[size];
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "Enter the number of positions to rotate left: ";
    cin >> k;
    rotateArrayLeft(arr, size, k);
    cout << "Array after left rotation: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}