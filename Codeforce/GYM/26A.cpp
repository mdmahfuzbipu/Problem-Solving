#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll almostPrimes(ll n)
{
    vector<ll> primeDivisors(n + 1, 0);

    for (ll i = 2; i <= n;i++)
    {
        if(primeDivisors[i] == 0) // that means it's a prime number
        {
            for (ll j = i; j <= n; j += i)
            {
                primeDivisors[j]++;
            }
        }
    }

    ll countAlmostPrimes = 0;
    for (ll i = 2; i <= n;i++)
    {
        if(primeDivisors[i] == 2)
        {
            countAlmostPrimes++;
        }
    }

    return countAlmostPrimes;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll num;
    cin >> num;

    cout << almostPrimes(num) << "\n";

    return 0;
}