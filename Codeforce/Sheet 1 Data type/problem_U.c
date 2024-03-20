// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    double num;
    scanf("%lf",&num);
    
    int result=num/1;
    
    double rem=num-result;
    
    if(num==result)
    {
        printf("int %d",result);
    }
    else
    {
        printf("float %d %.3lf",result,rem);
    }

    return 0;
}