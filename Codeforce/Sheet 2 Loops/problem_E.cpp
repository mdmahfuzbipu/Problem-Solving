#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int max=INT_MIN;
    int num;
    while(n--)
    {
        cin>>num;

        if(max<num)
        {
            max=num;
        }
    }

    cout<<max<<endl;

}