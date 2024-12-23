#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n;
    cin>>n;
    vector<ll> nums(n + 1);

    for (ll i = 1; i <= n;i++) cin>>nums[i];

    vector<ll> prefix(n + 1);
    prefix[0] = 0;

    for (ll i = 1; i <= n;i++)
    {
        prefix[i] = prefix[i - 1] + nums[i];
    }

    sort(nums.begin(), nums.end());

    vector<ll> revPrefix(n + 1);
    revPrefix[0] = 0;

    for (ll i = 1; i <= n;i++)
    {
        revPrefix[i] = revPrefix[i - 1] + nums[i];
    }

    ll m;
    cin >> m;

    while(m--)
    {
        int type;
        ll l, r;
        cin >> type >> l >> r;

        if(type == 1)
        {
            ll resultSum = prefix[r] - prefix[l - 1];
            cout << resultSum << "\n";
        }

        else if(type == 2)
        {
            ll resultSum = revPrefix[r] - revPrefix[l - 1];
            cout << resultSum << "\n";
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
