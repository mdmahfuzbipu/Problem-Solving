#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int A[n];
    int min=INT_MAX;
    for(int i =0;i<n;i++)
    {
        cin>>A[i];
    }

    for(int j=0;j<n;j++)
    {
        if(A[j]<min)
        {
            min=A[j];
        }
    }

    int count=0;
    for(int m=0;m<n;m++)
    {
        if(A[m]==min)
        {
            count++;
        }
    }

    if(count%2 != 0)
    {
        cout<<"Lucky"<<endl;

    }
    else
    {
        cout<<"Unlucky"<<endl;

    }


}