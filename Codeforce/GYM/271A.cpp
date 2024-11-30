#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool distinct(ll number)
{

    string setNum = to_string(number);

    set<char> distinctNum(setNum.begin(), setNum.end());

    return distinctNum.size() == setNum.size();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll num;
    cin >> num;

    ll number = num + 1;

    while(!distinct(number))
    {
        number++;
    }

    cout << number << "\n";

    return 0;
}