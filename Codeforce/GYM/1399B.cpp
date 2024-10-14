#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solution()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    ll min_a = LLONG_MAX, min_b = LLONG_MAX;


    for (int i = 0; i < n;i++) {
        cin>>a[i]; 
        min_a = min(min_a,a[i]);
    }
    for (int i = 0; i < n;i++)
    {
        cin >> b[i];
        min_b = min(min_b, b[i]);
    }

    ll move = 0;

    for (int i = 0; i < n;i++)
    {
        move += max(a[i]-min_a, b[i]-min_b);
    }

    cout << move << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    int test;
    cin >> test;

    while (test--)
    {
        solution();
    }

    return 0;
}