#include <iostream>
using namespace std;
int main()
{
    int size;
    cin>>size;

    int *A= new int[size];//dynamic array


    for(int i=0;i<size;i++)
    {
        cin>>A[i];
    }

    for(int j=size-1;j>=0;j--)
    {
            cout<<A[j]<<" ";
    }

    delete[] A;

}