#include <iostream>
#include <climits>
int findSecondLargest(int arr[], int size) {
    if (size < 2) {
        return -1;
    }
    int largest = INT_MIN, secondLargest = INT_MIN;
    for (int i = 0; i < size; ++i) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }   
    return secondLargest == INT_MIN ? -1 : secondLargest;
}
int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int size = sizeof(arr) / sizeof(arr[0]);    
    int result = findSecondLargest(arr, size);   
    if (result == -1) {
        std::cout << "No second largest element found." << std::endl;
    } else {
        std::cout << "Second largest element is " << result << std::endl;
    }  
    return 0;
}