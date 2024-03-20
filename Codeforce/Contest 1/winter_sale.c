#include <stdio.h>
int main()
{
    int per;
    int price;

    double total;

    scanf("%d %d",&per,&price);
    int rem_per=100-per;

    total=(double)(price*100)/rem_per;

    printf("%.2lf\n",total);

}