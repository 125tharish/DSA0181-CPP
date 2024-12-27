#include <iostream>
#include <vector>
using namespace std;
int findMajorityElement(vector<int>& nums) {
    int candidate = nums[0], count = 1;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        }
    }
    return candidate;
}
int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    cout << "Majority element: " << findMajorityElement(nums) << endl;
    return 0;
}
