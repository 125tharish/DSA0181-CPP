#include <iostream>
using namespace std;
void sortArray(int arr[], int n) {
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        } else if (arr[mid] == 1) {
            mid++;
        } else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int arr[] = {0, 1, 2, 1, 0, 2, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    sortArray(arr, n);
    printArray(arr, n);
    return 0;
}
