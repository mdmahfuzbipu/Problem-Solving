#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[n];

    for(int i=0;i<n;i++)
    {    
        cin>>A[i];
    }

    int low=A[0],position=1;

    for(int i=0;i<n;i++)
    {
        if(A[i]<low)
            {
                low=A[i];
                position=i+1;
            }
    }

    cout<<low<<" "<<position;


}