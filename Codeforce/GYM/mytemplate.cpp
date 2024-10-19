#include <bits/stdc++.h>
using namespace std;

// Shortcuts for commonly used types and constants
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

// Constants
const ll MOD = 1e9 + 7;   // Use for modulo operations if needed
const ll INF = LLONG_MAX; // Use for initializing maximum values

void solve()
{
    ll n;
    cin >> n;
    vl a(n), b(n); // Using vector<long long> for larger inputs
    ll min_a = INF, min_b = INF;

    rep(i, n)
    {
        cin >> a[i];
        min_a = min(min_a, a[i]);
    }

    rep(i, n)
    {
        cin >> b[i];
        min_b = min(min_b, b[i]);
    }

    ll move = 0;

    rep(i, n)
    {
        move += max(a[i] - min_a, b[i] - min_b);
    }

    cout << move << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   

    int test;
    cin >> test;

    while (test--)
    {
        solve();
    }

    return 0;
}
