#include <iostream>
#include <unordered_map>
void countFrequency(int arr[], int size) {
    std::unordered_map<int, int> freqMap;
    for (int i = 0; i < size; ++i) {
        freqMap[arr[i]]++;
    }
    for (const auto& pair : freqMap) {
        std::cout << "Element " << pair.first << " appears " << pair.second << " times." << std::endl;
    }
}
int main() {
    int arr[] = {10, 20, 10, 30, 20, 10, 20};
    int size = sizeof(arr) / sizeof(arr[0]);   
    countFrequency(arr, size);
    return 0;
}
