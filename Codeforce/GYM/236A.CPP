
#include <iostream>
#include <set>
using namespace std;
int main()
{

    set<int> myset;

    string name;
    cin >> name;
    for (int i = 0; i < name.length(); i++)
    {
        myset.insert(name[i]);
    }

    int nameSize = myset.size();

    if (nameSize % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }

    else
    {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}