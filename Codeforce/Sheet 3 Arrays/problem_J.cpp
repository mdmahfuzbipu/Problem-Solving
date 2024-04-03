#include <iostream>
#include <limits>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int A[n];
    int min_value=numeric_limits<int>::max();
    int value_count=0;

    for(int i =0;i<n;i++)
    {
        cin>>A[i];
    

        if(A[i]<min_value)
        {
            min_value=A[i];
            value_count=1;
        }
        else if(A[i]==min_value)
        {
            value_count++;
        }

    }


    if(value_count%2 != 0)
    {
        cout<<"Lucky"<<endl;

    }
    else
    {
        cout<<"Unlucky"<<endl;

    }


}