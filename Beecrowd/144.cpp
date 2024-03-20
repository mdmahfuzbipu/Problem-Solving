#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    long long int i=1,j=1,k=1;
    while(n--)
    {

        for(int m=0;m<2;m++)
        {
            
            cout<<i<<" "<<(j*j)+m<<" "<<(k*k*k)+m;

            cout<<endl;
            
        }

        i++;
        j++;
        k++;

    }
    
}