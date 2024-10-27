#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll len;
    string word;
    cin >> len >> word;

    vector<char> decoded;

    ll start = 0;
    while(len > 0)
    {
        if(len % 2 == 1)
        {
            decoded.push_back(word[start]);
        }

        else decoded.insert(decoded.begin(), word[start]);

        start++;
        len--;
    }



    for(char c: decoded) cout<<c;

   
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}