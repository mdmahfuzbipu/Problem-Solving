#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define pb push_back

void solution()
{
    string s;
    cin >> s;

    vector<ll> num;
    ll cnt = 0, score=0;


    for (int i = 0; i < s.length();i++)
    {
        if(s[i] == '1') cnt++;
        else{
            if(cnt)
            {
                num.pb(cnt);
                cnt = 0;
            }
        } 
    }


    if(cnt) num.pb(cnt);

    sort(num.begin(), num.end(), greater<ll>());

    for (int i = 0; i < num.size();i+=2)
    {
        score += num[i];
    }

    cout << score << "\n";
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll test;
    cin >> test;

    while(test--)
    {
        solution();
    }
}