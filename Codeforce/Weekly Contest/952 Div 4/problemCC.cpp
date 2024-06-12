#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;
        long long arr[n];

        for (long i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);

        long long count = 0;
        long long sum = 0;
        long long temp_sum = 0;

        for (long i = 0; i < n; i++)
        {
            temp_sum += arr[i];
            sum += arr[i];

            if (temp_sum == sum)
            {
                count++;
                temp_sum = 0;
            }
        }

        cout << count << "\n";
    }

    return 0;
}