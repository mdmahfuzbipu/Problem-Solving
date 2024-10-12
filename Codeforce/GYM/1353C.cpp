#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solution()
{
    ll n;
    cin >> n;

    ll sum = 0;

    // for (ll i = 1; i <= n / 2; i++)
    // {
    //     sum += (i * i * 8);
    // }

    n = n / 2;

    sum = (n * (n+1) * (2*n + 1) *8) / 6;

    cout << sum << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(2);

    int test;
    cin >> test;

    while (test--)
    {
        solution();
    }

    return 0;
}