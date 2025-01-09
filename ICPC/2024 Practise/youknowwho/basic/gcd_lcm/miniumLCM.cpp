#include <bits/stdc++.h>
#include <numeric>

#define ll long long

using namespace std;

void solve()
{
    ll n;
    cin >> n;

    ll a = 1;

    for (ll x = 2; x * x <= n;x++)
    {
        if(n % x == 0)
        {
            a = n / x;
            break;
        }
    }

    cout << a << " " << n - a << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll testcase;
    cin >> testcase;

    while (testcase--)
    {
        solve();
    }
}