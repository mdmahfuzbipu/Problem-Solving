#include <stdio.h>
 
int main() {
 
    double add,sum=0.0;
    
    int n=1;
    
    while(n<=100)
    {
        
        sum+=(1.0/n);
        ++n;
    }
    printf("%.2lf\n",sum);
 
    return 0;
}