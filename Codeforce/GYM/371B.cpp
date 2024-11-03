
#include <bits/stdc++.h>
using namespace std;

#define ll long long


ll countFact(ll &n, ll factor)
{
    ll cnt = 0;

    while(n % factor == 0)
    {
        n /= factor;
        cnt++;
    }

    return cnt;
}


void solve()
{
    ll sliceA, sliceB;
    cin >> sliceA >> sliceB;

    ll sliceA2 = countFact(sliceA, 2);
    ll sliceA3 = countFact(sliceA, 3);
    ll sliceA5 = countFact(sliceA, 5);


    ll sliceB2 = countFact(sliceB, 2);
    ll sliceB3 = countFact(sliceB, 3);
    ll sliceB5 = countFact(sliceB, 5);

    if(sliceA != sliceB)
    {
        cout << -1 << endl;
        return;
    } 


    ll operations = abs(sliceA2 - sliceB2) + abs(sliceA3 - sliceB3) + abs(sliceA5 - sliceB5);

    cout << operations << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
