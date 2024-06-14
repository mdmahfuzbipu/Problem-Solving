class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int pos = n;
        int lower = 0, upper = n - 1;

        while (lower <= upper) {
            int mid = lower + (upper - lower) / 2;

            if (nums[mid] >= target) {
                upper = mid - 1;
                pos = mid;
            }

            else {
                lower = mid + 1;
            }
        }

        return pos;
    }
};