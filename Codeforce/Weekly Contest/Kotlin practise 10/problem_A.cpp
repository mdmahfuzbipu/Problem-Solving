#include <iostream>
#include <string> 

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int A[n];

        for(int i=0; i<n;i++)
        {
            cin>>A[i];
        }


        for(int i=0; i<n;i++)
        {
            if(A[i] != A[i+1])
            {
                cout<<i+1<<endl;
                break;
            }
        }
    }
}