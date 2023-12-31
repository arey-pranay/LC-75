class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double currentSum = 0;
        double maxSum = 0;

        // Calculate the sum of the first k elements
        for (int i = 0; i < k; i++) {
            currentSum += nums[i];
        }

        maxSum = currentSum;

        // Slide the window through the array
        for (int i = k; i < nums.size(); i++) {
            currentSum = currentSum + nums[i] - nums[i - k];
            maxSum = max(maxSum, currentSum);
        }

        return maxSum / k;
    }
};
