class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        long long max_sub = INT_MIN, sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];

            if (sum > max_sub) {
                max_sub = sum;
            }

            if (sum < 0) {
                sum = 0;
            }
        }

        return max_sub;
    }
};