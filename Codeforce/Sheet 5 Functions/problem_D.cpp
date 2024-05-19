#include <bits/stdc++.h>

using namespace std;

bool isPrime(int num)
{
    int count=0;

    if(num<=1)
    {
        return false;
    }

    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            return false;
        }

    }

   
    return true;

}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {

        int n;
        cin>>n;

        if(isPrime(n))
        {
            cout<<"YES"<<endl;
        }

        else
        {
            cout<<"NO"<<endl;
        }
    }

    
}