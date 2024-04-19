#include <iostream>
using namespace std;
int main()
{
    long long int N;
    cin>>N;
    long long int A[N];
    long long int A2[N];
    int Q;
    cin>>Q;

    
    for(int i=1;i<=N;i++)
    {
        cin>>A[i];

        if(i==1)
        {
            A2[i]=A[i];
        }
        else
        {
            A2[i]=A[i]+A2[i-1];
        }

        

        /*
            cin>>A[i];
            sum+=A[i];
            A2[i]=sum;
        */
        
        

    }
    //6  4  2  7  2  7
    //6  10 12 19 21 28


    while(Q--)
    {
        
        int L,R;
        cin>>L>>R;

        long long int ans=0;
        ans=(A2[R]-A2[L])+A[L];
        cout<<ans<<endl;

        

    }

}