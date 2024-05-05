#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        string s;

        for(int i=1; i<=n; i+=1) // for i= 1 ##
        {                        // for i=2 ##..
            if(i%2 == 1)
            {
                s+= "##";
            }

            else
            {
                s+="..";
            }
        } //so for n=2 S will be ##..
          // for n=3 S will be ##..##

        string t;
        for(int i =1 ;i <= n; i++)
        {
            if(i%2 == 1)
            {
                t+= "..";
            }
            else 
            {
                t+= "##";
            }
        }   // similiar t will be ..##
        // for  n=3 t will be  ..##..


        for(int i= 1;i <=n; i++)
        {
            if(i%2 == 1)
            {
                cout<< s <<"\n"<<s<<"\n";
            }

            else
            {
                cout<<t<<"\n"<<t<<"\n";
            }
        }
        


    }
}