#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long n;
        cin>>n;
        vector<long> arr(n);

        for(long i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        sort(arr.begin(),arr.end());

        long long count = 0;
        long long sum = 0;

        if(n==1 && arr[0] == 0) count = 1;
        else if(n==1 && arr[0] != 0) count = 0;

        else{

        //if(arr[0] == 0) count=1;
        for(long i=1; i<n; i++)
        {
            sum=0;

            for(long j=0; j<i; j++)
            {
                sum+=arr[j];

                if(sum==arr[i]) count++;

            }

            
        }

        }

        cout<<count<<"\n";
    }

    return 0;
}