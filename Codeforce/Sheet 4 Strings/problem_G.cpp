#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    string S;
    getline(cin,S);
    
    int i=0;
    while (S[i] != '/0')
    {
        if(S[i] == ',')
        {
            S[i]=' ';
        }

        else if(islower(S[i]))
        {
            S[i]=S[i]-32;
        }
        
        
        else if(isupper(S[i]))
        {
            S[i]=S[i]+32;
        }

        i++;
    }

    cout<<S<<endl;
    

    return 0;
}
