#include <iostream>
#include <set>
#include <vector>
void findUnion(int arr1[], int n1, int arr2[], int n2) {
    std::set<int> s(arr1, arr1 + n1);
    s.insert(arr2, arr2 + n2);
    for (int num : s) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}
int main() {
    int arr1[] = {1, 2, 2, 3, 4};
    int arr2[] = {2, 3, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    findUnion(arr1, n1, arr2, n2);
    return 0;
}
