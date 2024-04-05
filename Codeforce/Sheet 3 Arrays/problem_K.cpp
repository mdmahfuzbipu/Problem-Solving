#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char number;
    
    int sum=0;

    for(int i=0;i<n;i++)
    {
        cin>>number;
        sum+=number - '0';
    }


    cout<<sum;

}