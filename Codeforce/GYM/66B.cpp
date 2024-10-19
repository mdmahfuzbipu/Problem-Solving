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


void solve()
{
    ll n;
    cin >> n;

    vl vc(n);

    for (int i = 0; i < n;++i) cin>>vc[i];

    ll mx = 0;

    for (int i = 0; i < n;++i) // parent loop
    {
        ll r = 1; // watered sections // start 1 bcz it counts itself also as watered

        
        //left
        for (int j = i - 1; j >= 0;--j)
        {
            if(vc[j] <= vc[j+1]) ++r; // if left side smaller increase r++
            
            else break;
        }



        //right
        for (int j = i+1; j < n;++j)
        {
            if(vc[j]<= vc[j-1]) ++r;
            else break;
        }

        mx = max(r, mx);
    }

    cout << mx << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    solve();
    

    return 0;
}
