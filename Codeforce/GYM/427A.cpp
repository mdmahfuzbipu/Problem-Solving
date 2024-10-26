#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n;
    cin >> n;
    ll police = 0, crime = 0;
    vector<ll> cases(n);

    for (int i = 0; i < n;i++)
    {
        cin >> cases[i];
        if(cases[i] == -1) 
        {
            if(police > 0)
            {
                police--;
            }

            else
            {
                crime++;
            }

            

        }
        else
        {
            police += cases[i];
        } 
    }

    cout << crime << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}