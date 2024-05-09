#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    getline(cin,s);

    int word=1;
    for(int i=1; i<s.size(); i++)
    {   
        if(!(s[i] >= 'A' && s[i]<= 'z') && s[i+1]>= 'A' && s[i+1]<= 'z')
        {
            word++;
        }

    }


    cout<<word;

}