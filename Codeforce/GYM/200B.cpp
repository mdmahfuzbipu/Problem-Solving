
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

    int t;
    cin >> t;
    double total = t * 100;
    double fractions = 0;
    while (t--)
    {
        int x;
        cin >> x;
        fractions += x;
    }

    double percentage = fractions / total * 100;

    cout << fixed << setprecision(12) << percentage << endl;

    return 0;
}