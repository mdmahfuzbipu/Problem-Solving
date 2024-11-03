#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);
    ll total = 0, minus = 0;
    for (int i = 0; i < n;i++)
    {
        cin >> a[i];

        if(a[i] == -1) minus++;
    }

    ll plusNumber = n - minus;

    total = plusNumber + k;

    cout << total << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
