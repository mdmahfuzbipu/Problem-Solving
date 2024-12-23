#include <bits/stdc++.h>
using namespace std;

#define ll long long

void towerofhanoi(ll n, ll a, ll b, ll c)
{
    if(n == 1)
    {
        cout << a << " " << c << "\n";
        return;
    }

    towerofhanoi(n - 1, a, c, b); 
    // move large ones
    cout << a << " " << c << "\n";

    towerofhanoi(n - 1, b, a, c);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    ll a = 1, b = 2, c = 3;

    cout << (1 << n) - 1 << "\n";

    towerofhanoi(n,a,b,c);

    return 0;
}
