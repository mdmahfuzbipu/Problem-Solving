#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int gcd;
    for(int i=1;i<=max(a,b);i++)
    {
        if(a%i==0 && b%i==0)
            gcd=i;
    }

    cout<<gcd;

}