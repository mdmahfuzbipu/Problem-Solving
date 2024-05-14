class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt = 0;

        int i = s.length() - 1;
        bool counting = false;
        while (i >= 0) {
            if (s[i] != ' ') {
                cnt++;
                counting = true;
            }

            else if (counting) {
                break;
            }

            i--;
        }

        return cnt;
    }
};