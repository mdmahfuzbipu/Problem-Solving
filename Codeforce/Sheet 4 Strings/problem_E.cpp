#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;
    cin>>S;
    int sum=0;
    for(int i=0;i<S.length();i++)
    {   
        int num=S[i] - '0';
        sum+=num;
    }


    cout<<sum<<endl;
    return 0;
}
