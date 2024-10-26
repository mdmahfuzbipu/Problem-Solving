#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n;
    cin >> n;

    if (n == 2 || n % 2 == 0)
    {
        cout << "-1\n";
        return;
    }

    vector<ll> a(n), b(n), c(n);


    for (int i = 0; i < n;i++)
    {
        a[i] = i;
        b[i] = i;
        c[i] = (a[i] + b[i]) % n;
    }

    
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";

    
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    cout << "\n";

    
    for (int i = 0; i < n; i++)
    {
        cout << c[i] << " ";
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}