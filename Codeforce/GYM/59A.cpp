#include <bits/stdc++.h>
using namespace std;

#define ll long long


void solution()
{
    string word;
    cin >> word;

    ll upper = 0, lower = 0;

    for (int i = 0; i < word.length();i++)
    {
        if(word[i]>= 'a' && word[i]<='z') lower++;
        else if(word[i]>='A' && word[i]<='Z') upper++;
    }

    if(upper<=lower)
    {
       for(char &c:word)
       {
          c = tolower(c);
       }
    }
    else
    {
        for(char &c: word)
        {
           c = toupper(c);
        }
    }

    cout << word << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solution();
}