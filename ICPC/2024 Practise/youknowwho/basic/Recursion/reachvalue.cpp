#include <bits/stdc++.h>
using namespace std;

#define ll long long


bool reachvalue(ll curr, ll expected)
{
    if(curr == expected) return true;

    if(curr>expected) return false;

    return reachvalue(curr * 10, expected) || reachvalue(curr * 20, expected);
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

  
    while(n--)
    {
        ll num;
        cin >> num;

        if(reachvalue(1, num)) cout<<"YES"<<"\n";

        else cout<<"NO"<<"\n";
    }

    return 0;
}
