#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;

        string substr1="010";
        string substr2="101";

        size_t found1=s.find(substr1);
        size_t found2=s.find(substr2);

        if(found1 != string::npos || found2 != string::npos)
        {
            cout<<"Good"<<endl;
        }

        else
        {
            cout<<"Bad"<<endl;
        }
        
    }
    return 0;
}
