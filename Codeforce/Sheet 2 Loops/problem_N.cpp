#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char s;
    cin>>s;

    int t;
    cin>>t;

    while(t--)
    {   
        int n;

        cin>>n;

        for(int i = 0; i < n; i++)
        {
            cout<<s;
        }
        cout<<endl;
    }
}