#include <iostream>
#include <string>

using namespace std;

int main()
{
    string h= "hello";

    string s;
    cin>>s;

    int i=0,j=0;

    int lengthOfString=s.length();
    while(lengthOfString--)
    {
        /*
        if(i == s.size() || j == h.size())  // processing s.size , h.size takes extra time
        {
            break;
        }
        */
       
        
         if(h[j]==s[i])
         {
            j++;
         }

         i++;
    }

    if(j==h.length())
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
}