#include <stdio.h>
 
int main() {
 int x,y;

long long int sum=0;
 scanf("%d %d",&x,&y);

 int n=x>y?y:x;
if(n==x){
 while(n>=x && n<=y)
 {
    if(n%13 != 0)
    {
        sum+=n;
    }
    n++;
 }
}

else
{
    while(n>=y && n<=x)
 {
    if(n%13 != 0)
    {
        sum+=n;
    }
    n++;
 }
}

 printf("%lld\n",sum);
 
    return 0;
}