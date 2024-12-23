#include <bits/stdc++.h>
using namespace std;

#define ll long long

const ll mod = 1e9 + 7;

ll fact(ll n)
{
   if(n == 1 || n == 0) return 1;

   return (n % mod * fact(n-1) % mod) % mod;
}

void solve()
{
    ll n;
    cin >> n;

    ll result = fact(n);

    cout << result << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
