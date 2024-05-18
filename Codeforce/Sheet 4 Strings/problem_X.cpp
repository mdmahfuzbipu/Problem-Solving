#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;

    int lengthOfString=s.length();

    string minString=s;
    

    for(int i=0;i<lengthOfString-1;i++)
    {
        string substring=s.substr(0,i+1);

        sort(substring.begin(),substring.end());
        

        string remainString=s.substr(i+1);
        
        sort(remainString.begin(),remainString.end());


        

        string obtainString=substring+remainString;
        

        if(obtainString<=minString)
        {
            minString=obtainString;
            
        }
        
    }

    cout<<minString<<endl;
}