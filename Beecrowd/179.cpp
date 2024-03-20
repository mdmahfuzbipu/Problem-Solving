#include <iostream>
using namespace std;
int main()
{
    int par[5],impar[5];

    int a=0,b=0;
    for(int i=0;i<15;i++)
    {
        int n;
        cin>>n;



        if(n%2==0)
        {   
            par[a]=n;
            a++;
        }

        if(n%2!= 0)
        {
            impar[b]=n;
            b++;
        }

        if(a>4)
        {
            for(int m=0;m<5;m++)
            {
                cout<<"par["<<m<<"] = "<<par[m]<<endl;
            }
            a=0;
        }


        if(b>4)
        {
            for(int m=0;m<5;m++)
            {
                cout<<"impar["<<m<<"] = "<<impar[m]<<endl;
            }
            b=0;
        }
    }
        for(int m=0;m<b;m++)
        {
             cout<<"impar["<<m<<"] = "<<impar[m]<<endl;
        }


        for(int m=0;m<a;m++)
        {
            cout<<"par["<<m<<"] = "<<par[m]<<endl;
        }

}