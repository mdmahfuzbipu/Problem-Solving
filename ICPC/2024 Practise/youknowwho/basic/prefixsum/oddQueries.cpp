#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, q;
        cin >> n >> q;

        vector<ll> nums(n + 1);

        for (ll i = 1; i <= n; i++)
            cin >> nums[i];

        vector<ll> prefix((n + 1), 0);

        for (ll i = 1; i <= n; i++)
        {
            prefix[i] = prefix[i - 1] + nums[i];
        }

        ll totalsum = prefix[n];

        while (q--)
        {
            ll l, r, k;
            cin >> l >> r >> k;

            ll ksum = prefix[r] - prefix[l - 1];

            ll remainsum = totalsum - ksum + ((r - l + 1) * k);

            if (remainsum % 2 != 0)
                cout << "YES" << "\n";
            else
                cout << "NO" << "\n";
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
