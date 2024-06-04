class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0, max_one = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {

                cnt++;

            } else {
                cnt = 0;
            }
            max_one = max(max_one, cnt);
        }

        return max_one;
    }
};