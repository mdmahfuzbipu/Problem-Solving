#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n, x;
    cin >> n >> x;

    vector<ll> nums(n);

    for (ll i = 0; i < n;i++) cin>>nums[i];

    unordered_map<ll, int> prefix_count;
    ll prefix_sum = 0, result = 0;
    prefix_count[0] = 1;

    for (ll i = 0; i < n;i++)
    {
        prefix_sum += nums[i];

        ll target = prefix_sum - x;
        if(prefix_count.find(target) != prefix_count.end())
        {
            result += prefix_count[target];
        }

        prefix_count[prefix_sum]++;
    }

    cout << result << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
