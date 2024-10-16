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

    for (ll i = 0; i < n;i++) cin>>a[i];

    ll min_a = LLONG_MAX;

    sort(a.begin(), a.end());


    for (ll i = 0; i < n-1;i++)
    {
        min_a = min(min_a, a[i + 1] - a[i]);
    }

    cout << min_a << "\n";
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
