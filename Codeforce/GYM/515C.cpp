#include <bits/stdc++.h>
using namespace std;


#define ll long long

void solution()
{
    map<char, string> mp;

    mp['0'] = mp['1'] = "";
    mp['2'] = "2";
    mp['3'] = "3";
    mp['4'] = "223";
    mp['5'] = "5";
    mp['6'] = "35";
    mp['7'] = "7";
    mp['8'] = "2227";
    mp['9'] = "2337";

    ll n;
    string s, result = "";
    cin >> n >> s;

    for (int i = 0; i < s.size();i++)
    {
        result += mp[s[i]];
    }

    sort(result.rbegin(), result.rend());

    cout << result << "\n";
}


int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solution();
}