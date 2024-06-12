#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int row,col;
        cin>>row>>col;


        vector<string> square(row);

        for(int i=0;i<row;i++)
        {
                cin>>square[i];
        }

        int min_h=INT_MAX;
        int max_h=INT_MIN;
        int min_k=INT_MAX;
        int max_k=INT_MIN;

        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(square[i][j] == '#')
                {
                    if(i<min_h) min_h=i;

                    if(i>max_h) max_h=i;

                    if(j<min_k) min_k=j;

                    if(j>max_k) max_k=j;
                }
            }
        }

        int center_h= (min_h +max_h) /2;
        int center_k= (min_k +max_k) /2;

        cout<<center_h + 1 <<" "<<center_k+1<<"\n";

    }
}