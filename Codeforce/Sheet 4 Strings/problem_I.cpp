#include <iostream>
#include <string>
using namespace std;
int main()
{
    string S;
    cin >> S;

    int i = 0;
    int j = S.length() - 1;

    while (j >= 0)
    {
        if (S[i] != S[j])
        {
            cout << "NO" << endl;
            return 0;
        }
        i++;
        j--;
    }

    cout << "YES" << endl;
}