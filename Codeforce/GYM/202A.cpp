#include <iostream>
#include <string>
using namespace std;

int main()
{

    string word;
    cin >> word;
    char maxWord = 'a';
    for (char c : word)
    {
        if (c >= maxWord)
        {
            maxWord = c;
        }
    }

    int cnt = 0;

    for (char s : word)
    {
        if (s == maxWord)
            cnt++;
    }

    for (int i = 0; i < cnt; i++)
        cout << maxWord;

    return 0;
}