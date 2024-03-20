#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int x;
    long long int fact;
    while(t--)
    {
        
        fact=1;
        cin>>x;

        for(int i=1;i<=x;i++)
        {
            fact*=i;
        }
        cout<<fact<<endl;
    }
}