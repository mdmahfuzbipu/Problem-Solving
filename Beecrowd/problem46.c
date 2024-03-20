#include <stdio.h>
#include <math.h>
int main() {

    int start,end,duration;
    scanf("%d%d",&start,&end);
    if(start>= end){
    duration=24 - abs(start - end);
    }
    else {
        duration=abs(start - end);
    }
    printf("O JOGO DUROU %d HORA(S)\n",duration);

    return 0;
}
