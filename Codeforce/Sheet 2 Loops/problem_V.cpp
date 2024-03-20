#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;



    int n=1;

    while(t--)
    {
        for(int i=0;i<3;i++)
        {   
            //if(n%4 != 0)
            //{
                cout<<n<<" ";
                
                n++;
            //}
        }

        cout<<"PUM"<<endl;
        n++;
    }

}