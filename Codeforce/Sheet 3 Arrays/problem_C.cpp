#include <iostream>
using namespace std;
int main()
{
    int size;
    cin>>size;

    int Array[size];

    for(int i =0;i<size;i++)
    {
        cin>>Array[i];

        if(Array[i]>0)
            Array[i]=1;
        if(Array[i]<0)
            Array[i]=2;
    }

    for(int i=0;i<size;i++)
        cout<<Array[i]<<" ";

}