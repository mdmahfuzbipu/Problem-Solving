#include <bits/stdc++.h>
#include <numeric>

#define ll long long

using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> div;

    for (ll i = 1; i <= sqrt(n);i++)
    {
        if(n % i == 0)
        {
            div.push_back(i);
            {
                if(i != n/i) div.push_back(n/i);
            }
        }
    }

    sort(div.begin(), div.end());

    if (k > div.size())
    {
        cout << -1 << "\n";
        return;
    }

    else
    {
        cout << div[k-1] << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}