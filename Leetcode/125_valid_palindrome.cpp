class Solution {
public:
    bool isPalindrome(string s) {

        string valid_string = "";

        for (auto word : s) {
            if (isalnum(word)) {
                valid_string += tolower(word);
            }
        }

        int left = 0;
        int right = valid_string.size() - 1;

        while (left <= right) {

            if (valid_string[left] != valid_string[right]) {
                return false;
            }

            left++;
            right--;
        }
        return true;
    }
};