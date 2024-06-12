#include <bits/stdc++.h>

using namespace std;

#define int long long

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        int mx = 0, sum = 0, count = 0;

        for (int i = 0; i < n; i++)
        {
            mx = max(mx, a[i]);
            sum += a[i];

            if (2 * mx == sum)
                count++;
        }

        cout << count << "\n";
    }
}
