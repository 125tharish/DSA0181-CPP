#include <iostream>
#include <limits>
using namespace std;
void findLargestAndSmallest(const int arr[], int size, int &largest, int &smallest) {
    largest = INT_MIN;
    smallest = INT_MAX;
    for (int i = 0; i < size; ++i) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
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
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    int largest, smallest;
    findLargestAndSmallest(arr, size, largest, smallest);
    cout << "Largest element: " << largest << endl;
    cout << "Smallest element: " << smallest << endl;
    return 0;
}
