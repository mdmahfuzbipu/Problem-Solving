#include <bits/stdc++.h>

#define ll long long

using namespace std;


void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);

    for (int i = 0; i < n;i++) cin>>a[i];

    ll g = a[0];

    for (int i = 1; i < n;i++)
    {
        g = __gcd(g, a[i]);
    }

    if(g == 1)
    {
        cout << 0 << "\n";
    }

    else if(__gcd(g, n) == 1)
    {
        cout << 1 << "\n";
    }
    else if(__gcd(g, n-1) == 1)
    {
        cout << 2 << "\n";
    }
    else
    {
        cout << 3 << "\n";
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll testcase;
    cin >> testcase;

    while(testcase--) solve();
}