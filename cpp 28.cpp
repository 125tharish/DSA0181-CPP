#include <iostream>
#include <unordered_set>
void removeDuplicates(int arr[], int &size) {
    std::unordered_set<int> uniqueElements;
    int index = 0; 
    for (int i = 0; i < size; ++i) {
        if (uniqueElements.find(arr[i]) == uniqueElements.end()) {
            arr[index++] = arr[i];
            uniqueElements.insert(arr[i]);
        }
    }  
    size = index;
}
int main() {
    int arr[] = {1, 2, 3, 2, 4, 5, 3, 6, 4};
    int size = sizeof(arr) / sizeof(arr[0]);  
    removeDuplicates(arr, size);    
    std::cout << "Array after removing duplicates: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;   
    return 0;
}