#include <iostream>
#include <string>

using namespace std;

int main()
{

    int n;
    cin>>n;

    string S;
    cin>>S;

    int count=1;

    for(int i=0;i<n-1;i++)
    {
        if(S[i] != S[i+1])
        {
            count++;
        }
    }

    cout<<count<<endl;
    
}