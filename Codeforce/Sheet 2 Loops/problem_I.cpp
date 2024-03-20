#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int rev=0;
    int rem;
    int origin_n=n;
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        rev=rev*10+rem;
    }
    cout<<rev<<endl;
    if(rev==origin_n)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";

}