#include <iostream>
#include <vector>
using namespace std;
#define ll long long
int main()
{
    ll numOfOrange, maxSize, wasteCap, bag = 0, cnt = 0;

    cin >> numOfOrange >> maxSize >> wasteCap;

    vector<ll> oranges(numOfOrange);

    for (int i = 0; i < numOfOrange; i++)
    {
        cin >> oranges[i];
        if (oranges[i] <= maxSize)
        {
            bag += oranges[i];
        }

        if (bag > wasteCap)
        {
            cnt++;
            bag = 0;
        }
    }

    cout << cnt << "\n";

    return 0;
}