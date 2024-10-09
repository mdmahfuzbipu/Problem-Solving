
#include <iostream>
#include <set>
using namespace std;
int main()
{

    set<int> myset;

    for (int i = 0; i < 4; i++)
    {
        int value;
        cin >> value;
        myset.insert(value);
    }

    cout << 4 - myset.size() << endl;

    return 0;
}