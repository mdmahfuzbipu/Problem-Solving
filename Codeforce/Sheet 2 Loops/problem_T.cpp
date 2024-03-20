#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {

        //printing spaces
        
        //in first loop of i=1
        for(int j=1;j<=n-i;j++)
        {
            cout<<" "; 
        }//3 spaces will be printed for i=1
         
        
        //printing stars
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }

        // 1 star will be printed after the 3 spaces as i=1 so j<=2-1 -> j<=1 as j will be executed one time
    
        cout<<endl;
    }

}

