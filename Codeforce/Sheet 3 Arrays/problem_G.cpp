#include <iostream>
using namespace std;
int main()
{
    int size;
    cin>>size;

    int *Array= new int[size];

    int *reversed_Array= new int[size];
    for(int i=0;i<size;i++)
    {
        cin>>Array[i];
    }

    int index=0;

    for(int j=size-1;j>=0;j--)
    {

        reversed_Array[j]=Array[index];
        index++;
    }

    for(int k=0;k<size;k++)
    {
        if(Array[k] != reversed_Array[k])
        {
            cout<<"NO";
            return 0;
        }
    }

    cout<<"YES";


}