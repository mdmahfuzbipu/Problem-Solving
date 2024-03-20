#include <stdio.h>
#include <math.h>
int main() {

    double a,b,c,x,y,r1,r2;

    while(1){
    scanf("%lf%lf%lf",&a,&b,&c);
    y=b*b-4*a*c;
    x=sqrt(y);
    r1=(-b+x)/(2*a);
    r2=(-b-x)/(2*a);

    if(y>0 && a!=0){
    printf("R1 = %.5lf\n",r1);
    printf("R1 = %.5lf\n",r2);
    }

    else
    {
        printf("Impossivel calcular\n");
    }

    }

    return 0;
}
