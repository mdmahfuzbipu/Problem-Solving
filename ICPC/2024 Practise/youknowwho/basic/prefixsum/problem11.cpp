#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n, x;
    cin >> n >> x;

    vector<ll> nums(n + 1), prefixsum(n+1);

    for (ll i = 1;i<=n;i++){
        cin >> nums[i];
        prefixsum[i] = prefixsum[i - 1] + nums[i];
    }

    ll cnt = 0;

    for (ll i = 1; i <= n;i++)
    {
        if(prefixsum[i] - nums[i] )
    }

    cout << cnt << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
