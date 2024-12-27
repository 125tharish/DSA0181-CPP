#include <iostream>
#include <vector>
#include <algorithm>
int maxProductSubarray(std::vector<int>& nums) {
    int maxProduct = nums[0], minProduct = nums[0], result = nums[0];
    for (size_t i = 1; i < nums.size(); i++) {
        if (nums[i] < 0) {
            std::swap(maxProduct, minProduct);
        }
        maxProduct = std::max(nums[i], maxProduct * nums[i]);
        minProduct = std::min(nums[i], minProduct * nums[i]);
        result = std::max(result, maxProduct);
    }
    return result;
}
int main() {
    std::vector<int> nums = {2, 3, -2, 4, -1};
    std::cout << "Maximum product subarray: " << maxProductSubarray(nums) << std::endl;
    return 0;
}
