#include <iostream>
#include <math.h>
using namespace std;
void binary_to_decimal(int binary[],int size);
void decimal_to_binary(int n)
{
    int binary[32];

    int rem =0,i=0,count=0;
    while (n > 0)
    {
        rem=n%2;
        if(rem==1)
        {
        count++;
        binary[i]=rem;
        i++;
        }
        
        n=n/2;
    }
    
    binary_to_decimal(binary,i-1);

}

void binary_to_decimal(int binary[],int size)
{
    int decimal=0;

    for(int i=0;i<=size;i++)
    {
        decimal+=pow(2,i);
    }

    cout<<decimal<<endl;
}

int main()
{
    int t,n;
    cin >> t;

    while(t--)
    {
    cin>>n;
    decimal_to_binary(n);
    }
}