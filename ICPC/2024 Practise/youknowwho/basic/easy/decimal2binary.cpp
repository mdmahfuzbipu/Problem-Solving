#include <bits/stdc++.h>
using namespace std;

#define ll unsigned long long

void solve()
{
    ll num;
    cin >> num;
    cout << "Binary :"  << bitset<8>(num) << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
