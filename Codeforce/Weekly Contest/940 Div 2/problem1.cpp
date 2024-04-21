#include <iostream>
#include <algorithm>
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

    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int counts=0;

    

    for(int i=0;i<n;i++)
    {
        int occurance=count(A,A+n,A[i]);

        if(occurance>=3)
        {
            counts=1;
        }

    }

    cout<<counts<<endl;

}

}