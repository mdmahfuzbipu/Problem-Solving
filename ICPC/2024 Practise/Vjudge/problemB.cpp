#include <bits/stdc++.h>
using namespace std;

#define ll long long


void solve()
{
    ll a, b;
    cin >> a >> b;

    if(a>b) cout<<0<<"\n";
    
    else cout<<b-a+1<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
    

    return 0;
}
