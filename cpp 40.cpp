#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
void findPairs(vector<int>& arr, int target) {
    unordered_map<int, int> freq;
    for (int num : arr) {
        int complement = target - num;
        if (freq[complement] > 0) {
            cout << "(" << complement << ", " << num << ")" << endl;
            freq[complement]--;
        } else {
            freq[num]++;
        }
    }
}
int main() {
    vector<int> arr = {1, 5, 7, -1, 5};
    int target = 6;
    findPairs(arr, target);
    return 0;
}
