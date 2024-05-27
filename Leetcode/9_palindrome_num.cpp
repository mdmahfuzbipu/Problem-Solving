class Solution {
public:
    bool isPalindrome(int x) {

        if(x<0) return false;

        int original_num=x;
        int reverse_number = 0;
        
        while(x)
        {
            if(reverse_number > INT_MAX/10 || reverse_number < INT_MIN/10) return false;

            int digit = x % 10;
            reverse_number = reverse_number * 10 + digit;

            x/=10;

        }

        if(reverse_number == original_num) return true;
        return false;
        
    }
};