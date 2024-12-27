#include <iostream>
using namespace std;
void mergeSortedArrays(int arr1[], int size1, int arr2[], int size2, int merged[]) {
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2) {
        if (arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }
    while (i < size1) {
        merged[k++] = arr1[i++];
    }
    while (j < size2) {
        merged[k++] = arr2[j++];
    }
}
int main() {
    int size1, size2;
    cout << "Enter the size of the first sorted array: ";
    cin >> size1;
    if (size1 <= 0) {
        cout << "Array size must be greater than 0." << endl;
        return 1;
    }
    int arr1[size1];
    cout << "Enter " << size1 << " sorted elements for the first array: ";
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }
    cout << "Enter the size of the second sorted array: ";
    cin >> size2;
    if (size2 <= 0) {
        cout << "Array size must be greater than 0." << endl;
        return 1;
    }
    int arr2[size2];
    cout << "Enter " << size2 << " sorted elements for the second array: ";
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }
    int merged[size1 + size2];
    mergeSortedArrays(arr1, size1, arr2, size2, merged);
    cout << "Merged sorted array: ";
    for (int i = 0; i < size1 + size2; i++) {
        cout << merged[i] << " ";
    }
    cout << endl;
    return 0;
}