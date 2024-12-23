#include <bits/stdc++.h>
using namespace std;

#define ll long long

void print1toN(ll n)
{
    if(n < 1) return;

    print1toN(n - 1);

    cout << n << "\n";
}

void solve()
{
    ll n;
    cin >> n;

    print1toN(n);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
