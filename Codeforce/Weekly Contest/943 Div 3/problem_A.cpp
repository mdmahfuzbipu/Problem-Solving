#include <iostream>

using namespace std;

int gcd(int a , int b)
{
    if(b ==0)
    {
        return a;
    }

    return gcd(b,a%b);
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
    int x;
    cin>>x;

    int maxNum=0;
    int max_Y=0;
    for(int y=1;y<x;y++)
    {
        
        int gcdOfNum=gcd(x,y);

        if((gcdOfNum+y) > maxNum )
        {
            maxNum=gcdOfNum+y;
            max_Y=y;
        }

    }

    
    cout<<max_Y<<endl;

    }
}