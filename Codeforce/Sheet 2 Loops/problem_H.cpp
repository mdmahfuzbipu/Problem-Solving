#include <iostream>
using namespace std;
int main()
{
    int n;
    int count=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            count++;
    }

    if(n>1 && count==2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}