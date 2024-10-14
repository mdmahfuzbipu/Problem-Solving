#include <bits/stdc++.h>

#define ll long long int

using namespace std;



void solution()
{
    ll n;
    cin >> n;

    ll result = 2 * ((1LL << n) - 1);

    cout << result << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // cout << fixed << setprecision(2);

    // int test;
    // cin >> test;

    // while (test--)
    // {
        
    // }

    solution();


    return 0;
}