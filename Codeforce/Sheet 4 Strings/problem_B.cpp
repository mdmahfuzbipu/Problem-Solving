#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string S;
    getline(cin,S);

    int i=0;

    while(S[i] != '\\')
    {
        cout<<S[i];
        i++;
    }
}