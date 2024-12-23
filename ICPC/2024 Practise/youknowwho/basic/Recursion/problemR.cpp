#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool ispalindrome(vector<ll> &arr,ll start, ll end)
{
    if(start>=end) return true;

    else if(arr[start] != arr[end]) return false;

    return ispalindrome(arr, start + 1, end - 1);
}

void solve()
{
    ll n;
    cin >> n;

    vector<ll> vec(n);
    for (ll i = 0; i < n;i++)
    {
        cin >> vec[i];
    }

    if(ispalindrome(vec,0,vec.size()-1))
    {
        cout << "YES" << "\n";
    }

    else cout << "NO" << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
