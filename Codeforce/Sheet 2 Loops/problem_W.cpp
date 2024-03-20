#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {   
        //printing spaces
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }

        //printing stars
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }

        cout<<endl;
    }

    //lower part of diamond


    for(int i=n;i>=1;i--)
    {
        //printing spaces
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }

        //printing stars

        for(int j=2*i-1;j>=1;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}