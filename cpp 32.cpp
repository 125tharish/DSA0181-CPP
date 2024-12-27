#include <iostream>
#include <vector>
void segregateEvenOdd(int arr[], int n) {
    int left = 0, right = n - 1;
    while (left < right) {
        while (arr[left] % 2 == 0 && left < right) left++;
        while (arr[right] % 2 == 1 && left < right) right--;
        if (left < right) {
            std::swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
int main() {
    int arr[] = {12, 34, 45, 9, 8, 90, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    std::cout << "Original array: ";
    printArray(arr, n);
    segregateEvenOdd(arr, n);
    std::cout << "Array after segregation: ";
    printArray(arr, n);
    return 0;
}
