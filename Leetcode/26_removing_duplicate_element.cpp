class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int uniqueNumber = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[uniqueNumber] != nums[i]) {
                nums[uniqueNumber + 1] = nums[i];
                uniqueNumber++;
            }
        }

        return (uniqueNumber + 1);
    }
};