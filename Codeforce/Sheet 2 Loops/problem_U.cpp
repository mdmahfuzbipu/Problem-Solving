#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int a,b;
    cin>>a>>b;

    long long int sum=0;

    for(int i=min(a,b);i<=n;i++)
    {
        

        int digit,sumOfDigit=0;

        int j=i;
        while(j>0)
        {
        digit=j%10;

        j/=10;

        sumOfDigit+=digit;
        
        //cout<<sumOfDigit<<endl;

        }

        if(sumOfDigit<=max(a,b) && sumOfDigit>=min(a,b))
        {
            //cout<<i<<endl;
            sum+=i;
           // cout<<sum<<endl;
        }
        
        
    }

    cout<<sum<<endl;

}