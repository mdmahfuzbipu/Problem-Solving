class Solution {
public:
    bool check(vector<int>& nums) {
        int break_point = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > nums[(i + 1) % nums.size()])
                break_point++;
        }

        if (break_point <= 1)
            return true;
        else
            return false;
    }
};