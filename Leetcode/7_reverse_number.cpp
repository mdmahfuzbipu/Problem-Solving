class Solution {
public:
    int reverse(int x) {
        
        int number=0;

        while(x!= 0)
        {
            int digit= x % 10;
            
            if(number> INT_MAX/10 ||  number < INT_MIN/10)
            {
                return 0;
            }

            number=number*10+digit;
            
            x/=10;
        }

        return number;
    }
};