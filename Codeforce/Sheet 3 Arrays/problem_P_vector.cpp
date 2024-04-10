#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin>>n;

    vector<int> A(n);
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    int operations = 0;
    bool allEven = true;

    for(int i = 0;i < n;i++)
    {
        if(A[i] % 2 != 0)
        {
            allEven=false;
            break;
        }
    }


    while(allEven)
    {
        for(int i = 0;i< n;i++)
        {
            
            if(A[i] % 2 != 0)
            {
                allEven=false;
                break;
            }

            A[i] /= 2;
        }

        if(allEven){

            operations++;
        }
        else
        {
            break;
        }
    }

    cout<<operations<<endl; 

}