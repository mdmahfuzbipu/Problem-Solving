#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n;
    cin >> n;

    ll powersum = 0, pow2 = 1;

    while (pow2 <= n)
    {
        powersum += pow2;
        pow2 *= 2;
    }

    ll total = (n * (n + 1) )/ 2;

    ll result = total - 2 * powersum;

    cout << result << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--) solve();
}