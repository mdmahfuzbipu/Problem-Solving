#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int A[n][m];


    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>A[i][j];
        }
    }

    int x;
    cin>>x;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(A[i][j]==x)
            {
                cout<<"will not take number"<<endl;
                return 0;
            }
        }
    }

    cout<<"will take number"<<endl;


}