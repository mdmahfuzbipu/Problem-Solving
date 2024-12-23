#include <iostream>
#define ll long long

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll N;
    cin >> N;

    while(N--)
    {
        ll a, b;
        cin >> a >> b;

        cout << a * b << "\n";
    }
}