#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--){
    int n;
    cin>>n;

    int A[n];

    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int count=0;

    for(int i = 0;i<n;i++)
    {
        int subArrayCount=0;
        for(int j=i;j>0;j--)
        {
            if(A[j]>=A[j-1] )
            {
                subArrayCount++;
            }
            else
            {
                break;
            }

            
        }
        count+=subArrayCount;

    }

    count+=n;
    cout<<count<<endl;
  }
}