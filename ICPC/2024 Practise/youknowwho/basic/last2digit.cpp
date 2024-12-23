#include <bits/stdc++.h>
using namespace std;

#define ll unsigned long long

void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll sum = 0;

    sum = (a % 100) * (b % 100) * (c % 100) * ( d % 100) ;  // (a*b % m ) == (a% m * b% m ) % m

   
    cout<<setw(2)<<setfill('0') << sum % 100<< "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
