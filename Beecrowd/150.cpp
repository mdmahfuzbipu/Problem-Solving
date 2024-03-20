#include <iostream>
using namespace std;
int main()
{
    int x,z;
    cin>>x>>z;
    while(x>=z)
    {
        cin>>z;
    }

    long long int sum=0;

    int count=0;

    while(z>sum)
    {
        sum+=x;
        x++;
        count++;
    }

    cout<<count<<endl;

}