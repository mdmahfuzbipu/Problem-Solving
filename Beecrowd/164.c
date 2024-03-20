#include <stdio.h>
 
int main() {
    
    int T;
    scanf("%d",&T);
    while(T--){
    int x;
    scanf("%d",&x);
    int sum=0;
    int n=1;
    
    while(n<=x/2)
    {
        if(x%n==0){
            sum+=n;
        }
        n++;
    }
    
    if(sum==x){
        printf("%d eh perfeito\n",x);
    }
    else
        printf("%d nao eh perfeito\n",x);
    }
    return 0;
}