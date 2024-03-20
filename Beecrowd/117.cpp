#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int t = 0;
    while (true)
    {
        for (int i = 0; i < n; i++)
        {
            cout << "N[" << t << "] = " << i << endl;

            t++;

            if (t == 1000)
                return 0;
        }
    }
}