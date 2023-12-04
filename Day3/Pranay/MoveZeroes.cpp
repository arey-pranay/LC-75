#include <vector>

class Solution {
public:
    void moveZeroes(std::vector<int>& nums) {
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[count++] = nums[i];
            }
        }

        // Fill the remaining elements with zeros
        while (count < nums.size()) {
            nums[count++] = 0;
        }
    }
};
