#include <bits/stdc++.h>

using namespace std;

void solve(string s)
{

       for(int i=1;i<s.size();i++)
       {
            if(s[i] != s[i-1])
            {
                swap(s[i],s[i-1]);
                cout<<"YES"<<endl;
                cout<<s<<endl;
                return;
            }
       }

       cout<<"NO"<<endl;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;
        solve(s);

    }
}