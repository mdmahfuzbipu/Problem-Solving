#include <stdio.h>

int main() {
    int starth,startm,endh,endm;
    scanf("%d %d %d %d",&starth,&startm,&endh,&endm);
    int hours,minutes;

    if(endh>=starth && endm>startm)
    {
        hours=endh-starth;
        minutes=endm-startm;
    }
    else  if(endh==starth && endm==startm)
    {
        hours=24;
        minutes=0;
    }

    else  if(endh>=starth && endm<=startm)
    {
        hours=(endh-starth)-1;
        minutes=60-(startm-endm);
    }

    else if(starth>=endh && endm=>startm){
        hours=starth-endh;
        minutes=endm-startm;

    }
    else if(starth>endh && startm>endm){
        hours=(starth-endh)-1;
        minutes=startm+endm;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hours,minutes);


    return 0;
}
