#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<int> occurrences(M, 0);

    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        occurrences[num - 1]++;
    }

    for (int i = 0; i < M; i++)
    {
        cout << occurrences[i] << endl;
    }

    return 0;
}