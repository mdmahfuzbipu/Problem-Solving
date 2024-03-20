#include <iostream>
using namespace std;

bool checkstring(int num)
{   
    string str=to_string(num);
    for(char c:str)
    {
        if(c != '4' && c != '7')
        {
            return false;
        }
    }
    return true;
}

void luckynum(int a,int b)
{
    bool count=false;
    for(int i=a;i<=b;i++)
    {
        if(checkstring(i))
        {   
            count=true;
            cout<<i<<" ";
        }
    }

    if(!count)
        cout<<-1;
}

int main()
{
    int a,b;
    cin>>a>>b;
    luckynum(a,b);
}