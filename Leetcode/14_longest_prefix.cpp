class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        sort(strs.begin(), strs.end());

        string first = strs[0], last = strs[strs.size() - 1];

        int n = min(first.size(), last.size());

        int prefixsize = 0;

        for (int i = 0; i < n; i++) {
            if (first[i] == last[i])
                prefixsize++;
            else
                break;
        }

        return first.substr(0, prefixsize);
    }
};