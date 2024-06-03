class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        int missing_num = n;

        for (int i = 0; i < n; i++) {
            missing_num = missing_num ^ nums[i] ^ i;
        }

        return missing_num;
    }
};