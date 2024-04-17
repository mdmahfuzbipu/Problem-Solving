#include <iostream>
using namespace std;
int main()
{
    int N,M;
    cin>>N>>M;

    char A[100][100];

    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=M;j++)
        {
            cin>>A[i][j];
        }
    }

    int X,Y;
    cin>>X>>Y;

    if(A[X][Y-1] != '.' && A[X][Y+1] != '.' && A[X-1][Y] != '.' && A[X-1][Y-1] != '.' && A[X-1][Y+1] != '.' && A[X+1][Y-1] != '.' && A[X+1][Y] != '.' && A[X+1][Y+1] != '.')
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }

}