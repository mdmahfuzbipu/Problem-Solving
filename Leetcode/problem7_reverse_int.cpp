class Solution {
public:
    int reverse(int x) {
        int rem=0,num=0;

        bool minus=false;
        if(x<0)
        {
            minus=true;
        }

        while(abs(x)>0)
        {
            /*
            next step we do the calculation r=r*10+x%10
lets understand with example:
let r =2,147,483,646 when we do r=r*10 then they got outside the integer range :
so at the previous step we apply the condition if (r>INT_MAX/10 || r<INT_MIN/10) return 0;
*/
        if(num > INT_MAX/10 || num < INT_MIN/10)
        {
            return 0;
        }

            rem=abs(x)%10;
            num=(num*10)+rem;
            x=x/10;
        }

        if(minus)
        {
            num*=-1;
        }

       

        return num;
    }
};