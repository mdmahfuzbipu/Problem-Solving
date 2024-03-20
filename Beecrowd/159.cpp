#include <iostream>
using namespace std;
int main()
{

    while(true)
    {
        int n;
        cin>>n;

        int count=0,sum=0;

        if(n==0)
            break;

        else
        {
            while(true)
            {
                if(n%2==0)
                {
                    sum+=n;
                    count++;
                }

                if(count==5)
                    break;
                
                n++;
            }

            cout<<sum<<endl;
        }

    }

}