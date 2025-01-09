#include <bits/stdc++.h>
#include <numeric>

#define ll long long

using namespace std;

void solve()
{
    ll l, r;
    cin >> l >> r;

    if(2*l > r)
    {
        cout << -1 << " " << -1 << "\n";
    }
    else
    {
        cout << l << " " << 2 * l << "\n";
    }
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