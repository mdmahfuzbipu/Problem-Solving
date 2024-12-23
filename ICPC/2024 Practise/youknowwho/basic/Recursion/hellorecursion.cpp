#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll recursionsum(vector<ll> &n, int index)
{
   if(index == n.size()) return 0;

   return n[index] + recursionsum(n, index + 1);
}

void solve(int i)
{
    ll n;
    cin >> n;

    vector<ll> nums(n);
    for (ll i = 0; i < n;i++) cin>>nums[i];

    ll sum = recursionsum(nums, 0);

    cout << "Case " << i << ": " << sum << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T;
    cin >> T;
    for (ll i = 1; i <= T;i++)
    {
        solve(i);
    } 

    return 0;
}
