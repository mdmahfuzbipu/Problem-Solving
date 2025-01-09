#include <bits/stdc++.h>
using namespace std;

#define ll unsigned long long

void solve()
{
    ll x, n;
    cin >> x >> n;
    ll result = 0;

    for (ll i = 2; i <= n;i+=2)
    {
        result += round(pow(x, i));
    }

    cout << result << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
