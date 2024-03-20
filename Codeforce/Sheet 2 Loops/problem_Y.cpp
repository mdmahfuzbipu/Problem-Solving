#include <iostream>
using namespace std;

int main()
{
    long long int n;
    cin>>n;

    if (n <= 0) {
        cout <<n<< endl;
        return 0;
    }

    long long int prev1=0,prev2=1;
    cout<<prev1;
    
    if(n>=2)
    {
        cout<<" "<<prev2;
    }

    long long int next;

    for(int i=3;i<=n;i++)
    {
        next=prev1+prev2;
        cout<<" "<<next;
        prev1=prev2;
        prev2=next;

    }

}