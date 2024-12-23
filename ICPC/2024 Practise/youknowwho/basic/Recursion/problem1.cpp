#include <bits/stdc++.h>
using namespace std;

#define ll long long

void recursion(ll n)
{
    if(n == 0) return;
    cout << "I love Recursion\n";
    recursion(n - 1);

}

void solve()
{
    ll n;
    cin >> n;

    recursion(n);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
