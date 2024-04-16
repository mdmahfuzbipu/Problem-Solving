#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> numbers(n);

    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    for (int num=0;num<m;num++)
    {
        int times = count(numbers.begin(),numbers.end(), numbers[num]);
        cout << times << endl;
    }
}