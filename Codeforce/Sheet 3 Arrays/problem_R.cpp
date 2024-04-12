#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int A[n];   
    int B[n];   
       

    for(int i = 0;i<n;i++)
    {
        cin>>A[i];
    }    

    for(int i = 0;i<n;i++)
    {
        cin>>B[i];
    }

   bool isPermutation= true;

   sort(A,A+n);
   sort(B,B+n);
   

    for(int i= 0;i<n;i++)
    {
        if(A[i] != B[i])
        {
            isPermutation=false;
            break;
        }
    }

    if(isPermutation)
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }

}