#include <stdio.h>
 
int main() {
    int a;
    scanf("%d",&a);
    
    long long int result=1;
    
    for(int i=1;i<=a;i++)
    {
        result*=i;    
    }
 
    printf("%lld\n",result);
    return 0;
}