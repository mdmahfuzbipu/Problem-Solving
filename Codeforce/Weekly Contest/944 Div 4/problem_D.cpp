#include <bits/stdc++.h>

#define ll long long

using namespace std;

void solve()
{
    string s;
    cin>>s;
    int n=s.size();
    ll count=1,target=0;

    for(int i=1;i<n;i++)
    {
        if(s[i] == s[i-1])
        {
            continue;
        }

        else
        {
            count++;
        }

        if(s[i-1] == '0' && s[i]=='1')
        {
            target=1;
        }
        }
        int res=count - target;
        
        cout<<res<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;

    while(t--)
    {
        
        solve();
    }
}