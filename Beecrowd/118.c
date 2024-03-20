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
    int x=0;
while(1){
    start:
    input1=valid_score();
    input2=valid_score();
    
    avg=(input1+input2)/2.0;

    printf("media = %.2lf\n",avg);

    

    while(x!=2){
    printf("novo calculo (1-sim 2-nao)\n");
    scanf("%d",&x);
        if(x==1)
            goto start;
        
        if(x==2)
            break;
        else
            continue;
    }

    break;
}
}