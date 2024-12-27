#include <iostream>
using namespace std;
int maxSubarraySum(int arr[], int size) {
    int maxSum = arr[0];
    int currentSum = arr[0];
    for (int i = 1; i < size; i++) {
        currentSum = max(arr[i], currentSum + arr[i]);
        maxSum = max(maxSum, currentSum);
    }
    return maxSum;
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
    int maxSum = maxSubarraySum(arr, size);
    cout << "Maximum sum of a subarray: " << maxSum << endl;
    return 0;
}