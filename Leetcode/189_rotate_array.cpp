class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int n = nums.size();

        k = k % n; // if k is larger than size of the array

        vector<int> temp(n);
        
        //Copying the last rotated k elements at beginning of temp vector
        for (int i = 0; i < k; i++) {
            temp[i] = nums[n - k + i];
        }

        //copying the first unrotated elements at the end of temp vector 
        for (int i = k; i < n; i++) {
            temp[i] = nums[i - k];
        }

        nums = temp; // then modified the original vector 

    }
};