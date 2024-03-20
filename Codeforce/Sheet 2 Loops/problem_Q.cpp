#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long int num;
        cin>>num;

        if(num==0)
        {
            cout<< "0"<<endl;
            continue;
        }

        int rem;

        while(num>0)
        {
            rem=num%10;
            cout<<rem<<" ";
            num=num/10;
        }
        cout<<endl;
    }
    
}