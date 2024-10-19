#include <bits/stdc++.h>
using namespace std;


#define ll long long

void solution()
{
    ll n, h;
    cin >> n >> h;

    vector<ll> vec(n);

    for (ll i = 0; i < n;i++) cin>>vec[i];

    ll cnt = 0;

    for (ll i = 0; i < n;i++)
    {
        if(vec[i]>h) cnt+=2;
        else cnt++;
    }

    cout << cnt << "\n";
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solution();
}