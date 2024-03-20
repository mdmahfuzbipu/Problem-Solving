#include <iostream>
using namespace std;

int main()
{
    int x=1999;

    int y;
    while(1)
    {
        cin>>y;

        if(x==y)
        {
            cout<<"Correct";
            return 0;
        }

        else
            cout<<"Wrong"<<endl;
    }
}