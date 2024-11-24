#include <bits/stdc++.h>
using namespace std;

#define ll long long


void solve()
{
    ll k;
    cin >> k;

    vector<ll> a(k);

    for (ll i = 0; i < k;i++) cin>>a[i];

    vector<ll> cnt(k + 1, 0);

    for(auto x: a) cnt[x]++;

    for (ll i = 1; i <= k - 2;i++)
    {
        if((k-2) % i == 0)
        {
            ll j = (k - 2) / i;
            if(i==j ? cnt[i] >= 2 : (cnt[i] > 0 && cnt[j] > 0))
            {
                cout << i << " " << j << "\n";
                return;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test;
    cin >> test;

    while (test--)
    {
        solve();
    }

    return 0;
}
