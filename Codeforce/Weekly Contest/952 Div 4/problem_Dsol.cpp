#include <bits/stdc++.h>
using namespace std;

#define int long long
const int N = 2e5 + 20;

string s[N];

int32_t main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;


        for(int i=0;i<n;i++) cin>>s[i];

        int sumX=0,sumY=0,cnt=0;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(s[i][j] == '#')
                {
                    sumX+=i;
                    sumY+=j;
                    cnt++;
                }
            }
        }

        cout<<sumX/cnt+1<<" "<<sumY/cnt+1<<"\n";
    }

}