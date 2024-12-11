#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> arr(n+1);

    for (ll i = 1; i <= n;i++) cin>>arr[i];

    vector<ll> prefix(n+1);
    prefix[0] = 0;

    for (ll i = 1; i <= n;i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    } 


    while(q--)
    {
        ll a, b;
        cin >> a >> b;
        


        ll result = prefix[b] - prefix[a-1];
        cout << result << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
