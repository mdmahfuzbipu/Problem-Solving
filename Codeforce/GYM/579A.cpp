#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll num;
    cin >> num;

    ll result = 0;

    while(num)
    {
        if(num & 1) result++;

        num = num >> 1;
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