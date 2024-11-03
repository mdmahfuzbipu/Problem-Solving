#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n;
    cin >> n;

    vector<vector<ll>> vec(n, vector<ll>(2));
    bool unchanged = true;
    bool serialized = true;

    for (int i = 0; i < n; i++)
    {
        cin >> vec[i][0] >> vec[i][1];
        if (vec[i][0] != vec[i][1])
        {
            unchanged = false;
        }
    }

    if (!unchanged)
    {
        cout << "rated\n";
        return;
    }

    
    for (int i = 1; i < n; i++)
    {
        if (vec[i][0] > vec[i - 1][0])
        {
            serialized = false;
            break;
        }
    }

    cout << (serialized ? "maybe\n" : "unrated\n");
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
