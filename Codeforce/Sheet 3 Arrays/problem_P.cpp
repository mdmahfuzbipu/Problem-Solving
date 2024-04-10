#include <iostream>
using namespace std;

int checkOperation(int arr[],int size)
{
    static int count=0;
    int rem=0;
    for(int i=0;i<size;i++)
     {
        if(arr[i]%2 != 0)
        {
            rem++;
            break;
        }

        arr[i]=arr[i]/2; 
    }

    if(rem>0)
    {
        return count;
    }

    else 
    {
        count++;
        return checkOperation(arr,size);
    }


}

int main()
{
    int n;
    cin>>n;

    int *A = new int[n];

    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }


    int result=checkOperation(A,n);

    cout<<result<<endl;
    delete[] A;

}