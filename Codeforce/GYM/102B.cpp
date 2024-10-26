#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    string number;
    cin >> number;

    if(number.length() <= 1)
    {
        cout << 0 << "\n";
        return;
    }

    ll cnt = 0;

    while(number.length() > 1)
    {
        ll sum = 0;
        for(char digit: number)
        {
            sum += digit - '0';
        }

        number = to_string(sum);

        cnt++;
    }

    cout << cnt << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}