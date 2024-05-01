#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    string S,T;
    cin>>S>>T;

    string R;
    int minLength=min(S.length(),T.length());
    int i=0;
    for(i=0;i<minLength;i++)
    {
        R+=S[i];
        R+=T[i];
    }

    while(S.length() > i)
    {
        R+=S[i];
        i++;
    }

    while(T.length() > i)
    {

        R+=T[i];
        i++;
    }

    cout<<R<<endl;
    }
    
}