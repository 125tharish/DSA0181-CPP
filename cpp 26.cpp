#include <iostream>
using namespace std;
int sumOfArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
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
    int sum = sumOfArray(arr, size);
    cout << "Sum of all elements in the array: " << sum << endl;
    return 0;
}