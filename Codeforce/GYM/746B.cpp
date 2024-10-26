#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n;
    string word;
    cin >> n >> word;

    vector<ll> answer;


    for(char c: word)
    {
        ll mediun = answer.size() / 2;

        answer.insert(answer.begin() + mediun, c);
    }

    cout << string(answer.begin(), answer.end()) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}