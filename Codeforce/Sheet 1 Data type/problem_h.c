#include <stdio.h>
#include <math.h>
int main()
{
    double x,y;
    scanf("%lf %lf",&x,&y);

    double result=x/y;

    double floor_of_x=floor(result);
    double ceil_of_x=ceil(result);
    double round_of_x=round(result);

    printf("floor %.0lf / %.0lf = %.0f\n",x,y,floor_of_x);
    printf("ceil %.0lf / %.0lf = %.0f\n",x,y,ceil_of_x);
    printf("round %.0lf / %.0lf = %.0f\n",x,y,round_of_x);



}