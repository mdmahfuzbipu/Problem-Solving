
#include <iostream>
using namespace std;

int main()
{

    int cnt = 0;

    int n, m;
    cin >> n >> m;

    for (int a = 0; a * a <= n; a++)
    {
        int b = n - a * a;

        if (b >= 0 && a + b * b == m)
            cnt++;
    }

    cout << cnt << endl;

    return 0;
}