#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
    string S;
    cin>>S;

    map<char,int> charCount;

    for(char c:S)
    {
        charCount[c]++;
    }

    for(map<char,int>::iterator i=charCount.begin(); i != charCount.end();i++)
    {
        cout<<i->first<<" : "<<i->second<<endl;
    }
/*
    second way
    
    for(const auto& pair: charCount)
    {
        cout<<pair.first<<" : "<<pair.second<<endl;
    }
*/
}