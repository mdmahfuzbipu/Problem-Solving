#include <bits/stdc++.h>
#include <numeric>

#define ll long long

using namespace std;

void solve()
{
    ll a, b, x;
    cin >> a >> b;

    if(b%a == 0)
    {
        x = (b * b) / a;
    }

    else
    {
        x = (a * b) / __gcd(a, b);
    }

    cout << x << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll testcase;
    cin >> testcase;

    while(testcase--)
    {
        solve();
    }
}