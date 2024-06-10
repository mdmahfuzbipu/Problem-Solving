class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();

        if (n == 0)
            return 0;

        int longest = 1;

        unordered_set<int> st;

        for (int i = 0; i < n; i++) {
            st.insert(nums[i]);
        }

        for (auto num : st) {
            if (st.find(num - 1) == st.end()) {
                int count = 1;
                int start = num;
                while (st.find(start + 1) != st.end()) {
                    start++;
                    count++;
                }

                longest = max(longest, count);
            }
        }

        return longest;
    }
};