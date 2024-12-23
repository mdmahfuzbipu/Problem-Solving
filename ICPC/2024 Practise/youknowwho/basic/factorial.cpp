#include <bits/stdc++.h>
using namespace std;

#define ll unsigned long long

void solve()
{
    ll n;
    cin >> n;
    ll fact = 1;
    for (ll i = 1; i <= n;i++)
    {
        fact = (fact % 10) * (i % 10);
    }

    cout << fact << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;

    while(t--) solve();

    return 0;
}
