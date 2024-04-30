#include <iostream>
#include <string>
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
        cin>>s;



    int consecutive=0;
    bool aliceWins=false;

        for(int i=0;i<n;i++)
        {
            if(s[i] == 'U')
            {
                consecutive++;
            }
            else
            {
                consecutive=0;
            }


            if(n>2 && consecutive>=2)
            {
                aliceWins=true;
                break;
            }
        }

        if(n>2 && s[n-1]== 'U')
        {
            aliceWins=true;
        }

        if(n==0)
        {
            aliceWins=false;
        }


        if(aliceWins)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
}