#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define fi first
#define se second
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i <= (n); ++i)
#define mem(a, val) memset(a, val, sizeof(a))

const ll MOD = 1e9 + 7;
const ll INF = LLONG_MAX;

void solution()
{
    ll n;
    cin >> n;

    vl a(n);

    ll evenNum = 0, oddNum = 0;
    
    for (ll i = 0; i < n;i++) 
    {
        cin>> a[i];
        if(a[i] % 2 == 0) evenNum++;
        else oddNum++;
    }

    sort(a.begin(), a.end());

    if(oddNum % 2 == 0 && evenNum % 2 == 0)
    {
        cout << "YES" << "\n";
        return;
    }

    for (int i = 1; i < n;i++)
    {
        if(abs(a[i] - a[i-1]) == 1)
        {
            cout << "YES" << "\n";
            return;
        }
    }

    cout << "NO" << "\n";

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test;
    cin >> test;

    while (test--)
    {
        solution();
    }

    return 0;
}
