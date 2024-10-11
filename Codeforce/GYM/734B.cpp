#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int k2, k3, k5, k6;

    cin >> k2 >> k3 >> k5 >> k6;

    int cnt256 = min({k2, k5, k6});

    k2 -= cnt256;

    int cnt32 = min({k2, k3});

    int result = 256 * cnt256 + 32 * cnt32;

    cout << result << endl;

    return 0;
}