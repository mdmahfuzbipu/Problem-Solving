#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int MAX_X = 1e6;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<ll> queries(n);

    ll max_x = 0;

    for (ll i = 0; i < n;i++)
    {
        cin >> queries[i];
        max_x = max(queries[i], max_x);
    }

    vector<ll> divisor(MAX_X + 1, 0);

    for (ll i = 1; i <= max_x;i++)
    {
        for (ll j = i; j <= max_x;j+=i)
        {
            divisor[j]++;
        }
    }


    for(ll x: queries)
    {
        cout << divisor[x] << "\n";
    }
    
}