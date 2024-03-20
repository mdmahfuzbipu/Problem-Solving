#include <iostream>
using namespace std;
int main()
{
    int n,m;
    

    while(true){
    
    int upper,lower;
    
    cin>>n>>m;

    if(n<=0 || m<=0)
        break;

    if(n>m)
    {
        upper=n;
        lower=m;
    }

    else{
        upper=m;
        lower=n;
    }
    long long int sum=0;

    for(int i=lower;i<=upper;i++)
    {
        sum+=i;
        printf("%d ",i);
    }
    printf("sum =%lld\n",sum);
    
    }
}