#include <iostream>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int A[size][size];

    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            cin>>A[i][j];
        }
    }

    int mainDiagonal=0,secDiagonal=0;

    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(i==j)
            {
            mainDiagonal+=A[i][j];
            }

            if(i+j==size-1)
            {
                secDiagonal+=A[i][j];
            
            }
        }
    }

    int diff=abs(mainDiagonal-secDiagonal);
    cout<<diff<<endl;

}