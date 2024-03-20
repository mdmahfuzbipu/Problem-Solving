#include <stdio.h>

int main() {

    int ihour,iminute,fhour,fminute;
    scanf("%d %d %d %d",&ihour,&iminute,&fhour,&fminute);
    int dhour,dminute;
    if(ihour<fhour && iminute<fminute){
        dhour=fhour-ihour;
        dminute=fminute-iminute;
    }

    else if(ihour<fhour && iminute==fminute){
        dhour=fhour-ihour;
        dminute=fminute-iminute;
    }
    else if(ihour<fhour && iminute>fminute){
        dhour=(fhour-ihour)-1;
        dminute=60-(iminute-fminute);
    }
    else if(ihour==fhour && iminute==fminute){
        dhour=24-(fhour-ihour);
        dminute=fminute-iminute;
    }
    else if(ihour==fhour && iminute<fminute){
        dhour=fhour-ihour;
        dminute=fminute-iminute;
    }

    else if(ihour==fhour && iminute>fminute){
        dhour=(24-(ihour-fhour))-1;
        dminute=60-(fminute+iminute);
    }
    else if(ihour>fhour && iminute<fminute){
        dhour=(fhour+12)-ihour;
        dminute=fminute-iminute;
    }
    else if(ihour>fhour && iminute==fminute){
        dhour=(fhour+12)-ihour;
        dminute=fminute-iminute;
    }
    else if(ihour>fhour && iminute>fminute){
        dhour=(24-(fhour+ihour))-1;
        dminute=fminute+iminute;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",dhour,dminute);


    return 0;
}
