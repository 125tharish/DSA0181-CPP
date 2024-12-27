#include <iostream>
#include <algorithm>
void rearrangeArray(int arr[], int n) {
    int left = 0, right = n - 1;
    while (left <= right) {
        if (arr[left] < 0) {
            left++;
        } else if (arr[right] > 0) {
            right--;
        } else {
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
    int arr[] = {-1, 2, -3, 4, 5, -6, -7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    rearrangeArray(arr, n);
    printArray(arr, n);
    return 0;
}
