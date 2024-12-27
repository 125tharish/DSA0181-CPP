#include <iostream>
using namespace std;
void reverseArray(int arr[], int size) {
    int start = 0, end = size - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main() {
    int size;
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
    reverseArray(arr, size);
    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}