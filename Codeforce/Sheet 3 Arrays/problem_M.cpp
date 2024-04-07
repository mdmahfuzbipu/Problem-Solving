#include <iostream>
#include <limits>
using namespace std;

void swappingValue(int Arr[],int size)
{
    int minNum=0;
    int maxNum=0;

    for(int i=0;i<size;i++)
    {
        if(Arr[i]>Arr[maxNum])
        {
            maxNum=i;
        }

        if(Arr[i]<Arr[minNum])
        {
            minNum=i;
        }
    }

    swap(Arr[minNum],Arr[maxNum]);

}

int main()
{
    int n;
    cin>>n;
    int *A= new int[n];

    for(int i = 0;i<n;i++)
    {
        cin>>A[i];
    }

   
    swappingValue(A,n);
    

    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;


    delete[] A;
}