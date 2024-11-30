#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n;
    cin >> n;
    vector<ll> num(n);

    for (ll i = 0; i < n;i++) cin>>num[i];

    ll mask = 0, total_combinations = 1 << n;

    for (ll i = 0; i < total_combinations;i++)
    {
        mask = i;
        ll total_sum = 0;
        for (ll j = 0;j<n;j++)
        {
            if(mask & (1<<j))
            {
                total_sum += num[j];
            }

            else
            {
                total_sum -= num[j];
            }
        }

        if(total_sum % 360 == 0) 
        {
            cout << "YES" << "\n";
            return;
        }
    }

    cout << "NO" << "\n";
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}