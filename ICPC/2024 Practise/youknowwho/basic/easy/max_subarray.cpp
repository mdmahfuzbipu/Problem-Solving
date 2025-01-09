#include <iostream>
#include <vector>

using namespace std;

vector<int> findMaxsub(vector<int> &nums)
{
    int size = nums.size();

    vector<int> result;

    for (int i = 0; i < size; i++)
    {
        int maxNum = nums.at(i);

        for (int j = i; j < size; j++)
        {
            maxNum = max(maxNum, nums.at(j));

            result.push_back(maxNum);
        }
    }

    return result;
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> numbers(n);

        for (int i = 0; i < n; i++)
        {
            cin >> numbers.at(i);
        }

        vector<int> result = findMaxsub(numbers);

        for (int k = 0; k < result.size(); k++)
        {
            cout << result.at(k) << " ";
        }
        cout << endl;
    }
}