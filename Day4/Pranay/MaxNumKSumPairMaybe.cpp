#include <vector>
#include <algorithm>

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int count = 0;
        sort(nums.begin(), nums.end());

        int left = 0, right = nums.size() - 1;

        while (left < right) {
            int sum = nums[left] + nums[right];

            if (sum == k) {
                count++;
                left++;
                right--;
            } else if (sum < k) {
                left++;
            } else {
                right--;
            }
        }

        return count;
    }
};
