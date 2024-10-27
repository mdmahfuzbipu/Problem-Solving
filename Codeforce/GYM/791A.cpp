#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll a, b;
    cin >> a >> b;
    ll cnt = 0;

    while(a<=b)
    {
        a *= 3;
        b *= 2;
        cnt++;
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