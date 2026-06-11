class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double currsum = accumulate(nums.begin(), nums.begin() + k, 0.0);
        double maxsum = currsum;
        for (int i = k; i < nums.size(); i++) {
            currsum += nums[i] - nums[i - k];
            maxsum = max(currsum, maxsum);
        }
        return maxsum / k;
    }
};