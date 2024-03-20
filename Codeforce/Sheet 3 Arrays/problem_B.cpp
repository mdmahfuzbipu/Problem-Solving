#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int A[n];

    int target;

    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    cin>>target;

    
    for(int j =0; j< n; j++)
    {
        if(A[j]==target)
        {
            cout<<j<<endl;
            return 0;
        }
    }

    cout<<-1<<endl;
}