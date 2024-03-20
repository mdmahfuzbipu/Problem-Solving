#include <stdio.h>
int main()
{
    int a=1;
    double b=1;

    double result=0;

    while(a<=39)
    {
        result+=(double)(a/b); //b will be like 2.0

        a+=2;
        b*=2;
    
    }

    printf("%.2lf\n",result);

}