#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    
    while(n>0)
    {
        n=n/10;
        if(n<=9)
        {
            if(n%2==0)
            {
                printf("EVEN");
                break;
            }
            else
                printf("ODD");
                break;
        }
    }
    
    return 0;
}