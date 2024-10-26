#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n;
    cin >> n;

    vector<vector<ll>> a(n,vector<ll> (2,0));

    ll cnt = 0;

    for (int i = 0; i < n;i++)
    {
        for (int j = 0; j < 2;j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i != j && a[i][0] == a[j][1]) cnt++;
        }
    }

    cout << cnt << endl;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}