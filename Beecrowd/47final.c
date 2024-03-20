#include <stdio.h>

int main() {
    int shour,sminute,ehour,eminute,dhour,dminute;
    scanf("%d%d%d%d",&shour,&sminute,&ehour,&eminute);
    dhour=ehour-shour;
    dminute=eminute-sminute;

    if(dhour<0 || (dhour==0 && dminute ==0))
    {
        dhour+=24;
    }
    if(dminute<0)
    {
        dminute+=60;
        dhour--;
        if (dhour < 0) {
            dhour += 24;
        }
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",dhour,dminute);

    return 0;
}
