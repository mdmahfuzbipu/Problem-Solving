#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[n];

    long long int sum = 0;

    for(int i =0;i <n;i++)
    {
        cin>>A[i];
        sum+=A[i];
    }

    cout<<abs(sum)<<endl;

}