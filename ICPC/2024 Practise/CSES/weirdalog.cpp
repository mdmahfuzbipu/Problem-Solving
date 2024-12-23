#include <bits/stdc++.h>
using namespace std;

#define ll unsigned long long

void solve()
{
    ll num;
    cin >> num;

    cout << num ;
    while(num != 1)
    {
        
        if(num % 2 == 0)
        {
            num = num / 2;
        }
        else 
        {
            num = num * 3 + 1;
        }

        cout<<" " << num;
        }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
