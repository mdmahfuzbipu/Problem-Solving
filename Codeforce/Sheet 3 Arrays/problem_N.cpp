#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int a,b;
    string s;
    cin>>a>>b;
    cin.ignore();
    getline(cin,s);

    if(s.length() != a+b+1 || s[a] != '-')
    {
        cout<<"No"<<endl;
        return 0;
    }

    for(int i = 0;i<s.length();i++)
    {
        if(i==a)
        {
            continue;
        }

        if(!isdigit(s[i]))
        {
            cout<<"No"<<endl;
            return 0;
        }
    }

    cout<<"Yes"<<endl;
}