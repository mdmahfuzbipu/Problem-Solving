#include <iostream>
using namespace std;
int main()
{
    int N,M;
    cin>>N>>M;

    int *A=new int[N];
    int *B=new int[M];

    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }

    
    for(int i=0;i<M;i++)
    {
        cin>>B[i];
    }

    int ptrA=0,ptrB=0;


    while(ptrA<N && ptrB<M)
    {
        if(A[ptrA]==B[ptrB])
        {
            ptrA++;
            ptrB++;
        }
        else
        {
            ptrA++;
        }

    }


    if(ptrB==M)
    {
        cout<<"YES"<<endl;
    }

    else
    {
        cout<<"NO"<<endl;
    }


    delete[] A;
    delete[] B;
}