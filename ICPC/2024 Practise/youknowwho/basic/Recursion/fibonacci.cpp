#include <bits/stdc++.h>
using namespace std;

#define ll long long

const ll mod = 1000000007; // Use the correct integer value for the modulus

ll fibo(ll n)
{
    if(n == 1) return 0;
    if(n == 2) return 1;

    return fibo(n - 1) + fibo(n - 2);
}

void solve()
{
    ll n;
    cin >> n;

    ll result = fibo(n);

    cout << result << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
