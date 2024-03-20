#include <stdio.h>

double valid_score(){
    double x;
    scanf("%lf",&x);
    while(x>10 || x<0){
        printf("nota invalida\n");
        scanf("%lf",&x);
    }

    return x;
}

int main()
{
    double input1,input2;
    double avg;

    input1=valid_score();
    input2=valid_score();
    
    avg=(input1+input2)/2.0;

    printf("media = %.2lf\n",avg);
    
}