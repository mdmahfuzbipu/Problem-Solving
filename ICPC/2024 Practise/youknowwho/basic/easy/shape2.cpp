#include <bits/stdc++.h>
using namespace std;

#define ll unsigned long long

void solve()
{
    ll n;
    cin >> n;

    for (ll i = 1; i <= n;i++)
    {
        for (ll j = 1; j <= n - i;j++)
        {
            cout << " ";
        }

        for (ll k = 1; k <= 2*i -1;k++)
        {
            cout << "*";
        }

        cout << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}



