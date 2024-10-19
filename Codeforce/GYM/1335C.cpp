#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
void solution()
{
    ll teamsize;
    cin >> teamsize;
    vector<ll> teamnums(teamsize);
    map<ll,ll> numbers;

    for (int i = 0; i < teamsize;i++)
    {
        cin >> teamnums[i];
        numbers[teamnums[i]]++;
    }

    
    ll max_freq = 0;
    
    for(auto &n:numbers)
    {
        max_freq = max(max_freq, n.second);
    }

    ll distinctnum = numbers.size();

    


    if(distinctnum == max_freq)
    {
        cout << max_freq-1<< "\n";
    }

    else 
    {
        cout << min(distinctnum, max_freq) << "\n";
    }
}

int main()
{
    ll test;
    cin >> test;
    while(test--)
    {
        solution();
    }
}