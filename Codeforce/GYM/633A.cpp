#include <bits/stdc++.h>
using namespace std;


#define ll long long

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;

    ll g = __gcd(a, b);

    if(c % g != 0)
    {
        cout << "No" << "\n";
        return;
    }

    for (ll x = 0; x <= c / a;x++)
    {
        ll rem = c - x * a;

        if(rem>=0 && rem%b==0)
        {
            cout << "Yes" << "\n";
            return;
        }
    }

    cout << "No" << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}