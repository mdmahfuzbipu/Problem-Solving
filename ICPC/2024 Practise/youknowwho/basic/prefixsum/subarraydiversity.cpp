#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n;
    cin >> n;

    vector<ll> nums(n);

    map<ll, int> rem;

    rem[0] = 1;
    ll result = 0, prefix_sum = 0;

    for (ll i = 0; i < n;i++)
    {
        cin >> nums[i];
        prefix_sum += nums[i];
    
        ll target = ((prefix_sum % n) + n) % n;

        if(rem.find(target) != rem.end())
        {
            result += rem[target];
        }

        rem[target]++;
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
