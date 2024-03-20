#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double M[12][12];
    double sumOfArray=0;
    double avgOfArray=0;

    int L; // given row number
    
    cin>>L;

    char c;
    cin>>c;

    for(int i=0;i<12;i++)
        for(int j=0;j<12;j++)
            cin>>M[i][j];

    
    if(c=='S')
    {
        while(1)
        {
        for(int j=0;j<12;j++)
        {
            sumOfArray+=M[L][j];
        }

        cout<<fixed<<setprecision(1)<<sumOfArray<<endl;

        break;
        }
    
    }

    else if(c == 'M')
    {
        while(1)
        {
        for(int j=0;j<12;j++)
        {
            sumOfArray+=M[L][j];
        }
        avgOfArray = sumOfArray/12.0;

        cout<<fixed<<setprecision(1)<<avgOfArray<<endl;

        break;
        }
    }
    
}