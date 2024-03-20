#include <iostream>
using namespace std;
int main()
{
    int i;
    cin>>i;
    int digit;

    int sumOfDigit=0;
    while(i>0)
        {
        digit=i%10;

        cout<<digit<<endl;
        
        i/=10;

        sumOfDigit+=digit;
        
        }

    cout<<sumOfDigit;
}