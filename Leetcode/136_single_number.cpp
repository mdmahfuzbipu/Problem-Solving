class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> hash = {};

        for (int i = 0; i < nums.size(); i++) {
            hash[nums[i]]++;
        }

        for (auto it : hash) {
            if (it.second == 1)
                return it.first;
        }
        return -1;
    }
};

//XOR method

class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int single_num = 0;

        for (auto a : nums) {
            single_num = single_num ^ a;
        }

        return single_num;
    }
};