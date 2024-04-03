#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    

    while(t--)
    {
        int numOfElements;
        cin>>numOfElements;
        int A[numOfElements];

        int sum=0, min_sum=INT_MAX;

        

        for(int m=0;m<numOfElements;m++)
        {
            cin>>A[m];
        }

        for(int i=0;i<numOfElements-1;i++)
        {
            for(int j=i+1;j<numOfElements;j++)
            {
                sum=A[i]+A[j]+j-i;

                if(sum<min_sum)
                {
                    min_sum=sum;
                }
            }
        }

        cout<<min_sum<<endl;
    }
        
}

    