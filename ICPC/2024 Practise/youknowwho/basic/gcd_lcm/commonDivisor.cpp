#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll baseGCD = 0;
    while(n--)
    {
        ll number;
        cin >> number;

        baseGCD = __gcd(baseGCD, number);
    }

    ll ans = 0;
    for (ll i = 1; i * i <= baseGCD;i++)
    {
        if(baseGCD % i == 0)
        {
            ans++;

            if(i != baseGCD/i)
            {
                ans++;
            }
        } 
        
    }

    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    
}