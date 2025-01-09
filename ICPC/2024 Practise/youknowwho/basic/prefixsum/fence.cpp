#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> nums(n + 1, 0);

    vector<ll> prefix_sum(n+1,0);

    for (ll i = 1;i<=n;i++)
    {
        cin >> nums[i];
        prefix_sum[i] = prefix_sum[i - 1] + nums[i];
    }

    ll index = 1, cnt = prefix_sum[k - 1];
    ll value = LLONG_MAX;

    for (ll i = 1; i <= n - k + 1;i++)
    {
        ll sum = prefix_sum[i + k - 1] - prefix_sum[i - 1];

        if(value > sum)
        {
            value = sum;
            index = i;
        }
    }

    cout << index << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
