#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll valid_count = 0;

    ll n, l, r, x;
    cin >> n >> l >> r >> x;

    vector<ll> problems(n);

    for (int i = 0; i < n;i++) cin>>problems[i];

    for (ll mask = 0; mask < (1 << n);mask++)
    {
        vector<int> subset;
        ll total_diff = 0;
        for (int i = 0; i < n;i++)
        {
            if(mask & (1 << i))
            {
                subset.push_back(problems[i]);
                total_diff += problems[i];
            }
        }

        if(total_diff < l || total_diff > r) continue;

        if(subset.size() < 2) continue;

        int max_problem = *max_element(subset.begin(), subset.end());
        int min_problem = *min_element(subset.begin(), subset.end());

        int diff = max_problem - min_problem;

        if(diff < x) continue;

        valid_count++;
    }

    cout << valid_count << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}