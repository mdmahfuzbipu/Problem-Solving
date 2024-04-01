//using selection sort
#include <iostream>
using namespace std;
int main()
{
    int size;
    cin>>size;

    int *array= new int[size];

    //taking inputs for array

    for(int k=0;k<size;k++)
    {
        cin>>array[k];
    }


    for(int i=0;i<size-1;i++)
    {
        int min=i;

        for(int j=i+1;j<size;j++)
        {
            if(array[j]<array[min])
            {
               min=j;
            }

        }

        swap(array[i],array[min]);

    }


    for(int m=0;m<size;m++)
    {
        cout<<array[m]<<" ";
    }


    delete[] array;
}