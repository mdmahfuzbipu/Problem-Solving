#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int size;
    cin>>size;

    int arr[size];

    int i=0;
    while(i<size)
    {
        cin>>arr[i];
        i++;
    }

    for(int j=0;j<size;j++)
    {
        if(arr[j]<=10)
        {
            printf("A[%d] = %d\n",j,arr[j]);
        }
    }

}